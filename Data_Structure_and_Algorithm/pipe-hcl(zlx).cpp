

////////////////////////// Fetch

//Fetched instruction address (new PC)
word f_pc = [
    //Mispredicted branch: data from Memory stage
    M_icode == IJXX && !M_Cnd : M_valA; //That's valP in fact ('Select A')
    //Completion of RET instruction
    W_icode == IRET : W_valM;//jump to the ret address
    //Default: next instruction address
    1: F_predPC;
];

//Determine icode & ifun
word f_icode =[
    imem_error : INOP;//if error occurs, fill Fetch with NOP
    1: imem_icode;
];
word f_ifun=[
    imem_error : FNONE;
    1: imen_ifun;
];

//Is instruction valid?
bool instr_valid = f_icode in [INOP, IHALT, ...]

//status code update
word f_stat = [
    imem_error : SADR;
    !instr_valid : SINS;
    f_icode == IHALT: SHLT;
    1 : SAOK;
];
// Note: About status code:
// AOK=1, HLT=2, ADR=3, INS=4

//Does fetched ins requires a regid byte or a constant word?
bool need_regids=
    f_icode in {IRRMOVQ, IIRMOVQ, IRMMOVQ, 
        IMRMOVQ, IOPQ, IPUSHQ, IPOPQ};
bool need_valC=
    f_icode in {IIRMOVQ, IRMMOVQ, IMRMOVQ, IJXX, ICALL};

//Predicted PC 
word f_predPC =[
    f_icode in {IJXX, ICALL}: f_valC;//IJXX: "always taken"
    1: f_valP;
];

 
/////////////////////////// Decode
 
 //Basic arguments: d_srcA, d_srcB, d_dstE, d_dstM
 word d_srcA = [
    D_icode in {IRRMOVQ, IRMMOVQ, IOPQ, IPUSHQ } : D_rA; 
    D_icode in {IPOPQ, IRET} : RRSP;
    1 : RNONE;
 ];

word d_srcB = [
    D_icode in {IRMMOVQ, IMRMOVQ, IOPQ} : D_rB;
    D_icode in {IPUSHQ, IPOPQ, ICALL, IRET} : RRSP; 
    //Note: Each instruction relavant to the stack set d_srcB "RRSP"
    1: RNONE;
];

word d_dstE = [
    D_icode in {IRRMOVQ, IIRMOVQ, IOPQ }: D_rB;
    1 : RNONE;
    //Nothing to do with rA! valE can only be put in rB
];

word d_dstM = [
    D_icode in {IMRMOVQ, IPOPQ} : D_rA;
    1 : RNONE;
];

//Select + Forword
word d_valA = [
    D_icode in {ICALL, IJXX}: D_valP;
    //valP & valA use the same storage to save space
    //5 possible forward choices
    //e>M>w, dstM>dstE
    d_srcA == e_dstE : e_valE;
    d_srcA == M_dstM : m_valM;
    d_srcA == M_dstE : M_valE;
    d_srcA == W_dstM : W_valM;
    d_srcA == W_dstE : W_valE;
    1 : d_rvalA;//No forwarding needed, use value from register file
];

word d_valB = [
    d_srcB == e_dstE : e_valE;
    d_srcB == M_dstM : M_valM;
    d_srcB == M_dstE : M_valE;
    d_srcB == W_dstM : W_valM;
    d_srcB == W_dstE : W_valE;
    1 : d_rvalB;
];


////////////////////////// Execute

//select two input values for ALU
//aluA: 4 ; aluB: 2
//aluA possible choices: valA, valC, +-8
word aluA =[
    E_icode in {IRRMOVQ, IOPQ}: E_valA;
    E_icode in {IIRMOVQ, IRMMOVQ, IMRMOVQ} : E_valC;
    E_icode in {IPUSHQ, ICALL}: -8;
    E_icode in {IPOPQ, IRET}: 8;
    //Note: halt, nop, jXX don't need ALU (but JXX sets CC)
];
//aluB possible choices: valB, 0
word aluB = [
    E_icode in {IRMMOVQ, IMRMOVQ, IOPQ, 
        IPUSHQ, IPOPQ, ICALL, IRET} : E_valB;
    E_icode in {IRRMOVQ, IIRMOVQ} : 0;
    //Note: %rsp is always put in valB (but sometimes in valA as well)
];

//set ALU func
word alufun = [
    E_icode == IOPQ : E_ifun;
    1 : ALUADD;//other instructions require adding
];

//set CC for IOPQ, special dealing for Error condition
bool set_CC = E_icode == IOPQ 
    && !m_stat in {SADR, SINS, SHLT}
    && !W_stat in {SADR, SINS, SHLT};
    //if an error has occurred, CC can't be changed

//generate valA & valB for "e_xxx"
word e_valA = E_valA;
//Note: valB won't be used after Execute stage (no need to pass valB)


//e_dstE update (for cmovXX)
word e_dstE = [
    E_icode == IRRMOVQ && !e_Cnd : RNONE;
    //for cmovXX (a variate of rrmovq)
    1 : E_dstE;
];

////////////////////////// Memory
word mem_addr = [
    M_icode in {IRMMOVQ, IMRMOVQ, IPUSHQ, ICALL} : M_valE;
    M_icode in {IPOPQ, IRET} : M_valA;
    //Note: 
    //1. for IPUSHQ & ICALL, we use the changed value of %rsp
    //   but for IPOPQ & IRET, we use the initial value
    //    ---POPQ/RET should first read memory 
    //    ---and then increment the stack pointer
    //2. jXX has an address, but it doesn't read/write
    //   so jXX doesn't do anything in Memory stage
];

//read or write?
bool mem_read = M_icode in {IMRMOVQ, IPOPQ, IRET};
bool mem_write = M_icode in {IRMMOVQ, IPUSHQ, ICALL};

//status update
word m_stat = [
    dmem_error : SADR;
    //ADR can only be identified in Memory Stage
    1 : AOK;
];

//value update
word w_dstE = W_dstE;
word w_valE = W_valE;
vord w_dstM = W_dstM;

// Processor status update
word Stat = [
    W_stat == SBUB : SAOK;//bubble
    1 : W_stat;
]

 ///////////////////////// Hazard

//1. load/use hazard: F_stall, D_stall, E_bubble
//2. mispredicted branch: D_bubble, E_bubble
//3. ret: F_stall, D_bubble for 3 loops
//4. load/use + ret: F_stall, D_stall, E_bubble(stall>bubble)
    //eg. change %rsp and then ret

//Fetch
bool F_stall = 
    //load/use hazard
    E_icode in {IMRMOVQ, IPOPQ} && 
    E_dstM in {d_srcA, d_srcB} ||//NO D_srcA & D_srcB
    //stalling waiting for ret
    IRET in {D_icode, E_icode, M_icode};
bool F_bubble = 0;//Never insert a bubble in Fetch stage

//Decode
bool D_stall = 
    //load/use hazard
    E_icode in {IMRMOVQ, IPOPQ} &&
    E_dstM in {d_srcA, d_srcB};
bool D_bubble =
    //Mispredicted branch
    (E_icode==IJXX && !e_Cnd) ||
    //stalling waiting for ret
    IRET in {E_icode, M_icode} &&
    //.. but not for a load/use hazard
    !(E_icode in {IMRMOVQ, IPOP} &&
      E_dstM in {d_srcA, d_srcB});

//Execute
bool E_stall = 0;//never stall in Execute
bool E_bubble =
    //Mispredicted branch
    (E_icode==IJXX && !e_Cnd) ||
    //load/use hazard
    (E_icode in {IMRMOVQ, IPOPQ} && 
     E_dstM in {d_srcA, d_srcB});

//Memory
bool M_stall = 0;
bool M_bubble = m_stat in {SADR, SINS, SHLT} ||
     W_stat in {SADR, SINS, SHLT};
//after memory ,status can be decided.
//Write back
bool W_stall = W_stat in {SADR, SINS, SHLT};
bool W_bubble = 0;


