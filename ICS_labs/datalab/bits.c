/* 
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * name: zhang lingxin
 * userid: 2100013018
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting an integer by more
     than the word size.

EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implent floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operators (! ~ & ^ | + << >>)
     that you are allowed to use for your implementation of the function. 
     The max operator count is checked by dlc. Note that '=' is not 
     counted; you may use as many of these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2022 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y) {
    //exploit the property of binary operation: ~(A|B)=(~A)&(~B)
    return ~((~x)|(~y));
}
/* 
 * bitConditional - x ? y : z for each bit respectively
 *   Example: bitConditional(0b00110011, 0b01010101, 0b00001111) = 0b00011101
 *   Legal ops: & | ^ ~
 *   Max ops: 8
 *   Rating: 1
 */
int bitConditional(int x, int y, int z) {
    //using x and ~x as masks
    return (x&y) | ((~x)&z);
}
/* 
 * byteSwap - swaps the nth byte and the mth byte
 *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
 *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
 *  You may assume that 0 <= n <= 3, 0 <= m <= 3
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 2
 */
int byteSwap(int x, int n, int m) {
    //get the desired bytes with masks ma & mb
    //and swap them with left shift & right shift
    int d1 = n<<3;
    int d2 = m<<3;
    int ma = 0xff << d1;//mask 1
    int mb = 0xff << d2;//mask 2
    int a = (x & ma) >> d1 << d2;
    int b = (x & mb) >> d2 << d1;
    return (x & (~(ma|mb))) | (a&mb) | (b&ma);
}
/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3 
 */
int logicalShift(int x, int n) {
    //using a mask to change the consecutive 1 to zeros
    int msk = (~0)<<(31^n);//31^n=31-n
    msk <<= 1;
    msk = ~msk;
    return (x>>n) & msk;
}
/* 
 * cleanConsecutive1 - change any consecutive 1 to zeros in the binary form of x.
 *   Consecutive 1 means a set of 1 that contains more than one 1.
 *   Examples cleanConsecutive1(0x10) = 0x10
 *            cleanConsecutive1(0xF0) = 0x0
 *            cleanConsecutive1(0xFFFF0001) = 0x1
 *            cleanConsecutive1(0x4F4F4F4F) = 0x40404040
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 25
 *   Rating: 4
 */
int cleanConsecutive1(int x){
    //delete consecutive 1 by masks lx(x shifted to the left) & rx(x shifted to the right)
    int lx = x << 1;
    int rx = x >> 1;
    rx = rx & (~(1<<31));
    return (x&(~lx))&(x&(~rx)); 
}
/* 
 * countTrailingZero - return the number of consecutive 0 from the lowest bit of 
 *   the binary form of x.
 *   YOU MAY USE BIG CONST IN THIS PROBLEM, LIKE 0xFFFF0000
 *   YOU MAY USE BIG CONST IN THIS PROBLEM, LIKE 0xFFFF0000
 *   YOU MAY USE BIG CONST IN THIS PROBLEM, LIKE 0xFFFF0000
 *   Examples countTrailingZero(0x0) = 32, countTrailingZero(0x1) = 0,
 *            countTrailingZero(0xFFFF0000) = 16,
 *            countTrailingZero(0xFFFFFFF0) = 8,
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 40
 *   Rating: 4
 */
int countTrailingZero(int x){
    //add up them in a recursive way
    //(I can't describe it in English..)
    int y = x;
    x = ~x;
    x = x^(x+1);//0x000...111
    x = ((x & 0xaaaaaaaa)>>1) + (x & 0x55555555);//A=[1010],5=[0101]
    x = ((x & 0xcccccccc)>>2) + (x & 0x33333333);//C=[1100], 3=[0011];
    x = ((x & 0xf0f0f0f0)>>4) + (x & 0x0f0f0f0f);//11110000 & 00001111
    x = ((x & 0xff00ff00)>>8) + (x & 0x00ff00ff);
    x = ((x & 0xffff0000)>>16)+ (x & 0x0000ffff); 
    return x + (~(!(!y))) + 1;
}
/* 
 * divpwr2 - Compute x/(2^n), for 0 <= n <= 30
 *  Round toward zero
 *   Examples: divpwr2(15,1) = 7, divpwr2(-33,4) = -2
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int divpwr2(int x, int n) {
    //positives are simply shifted to the right
    //negatives are rounded toward zero with a bias
    //target:return x>>n;//=floor(1.0*x/2^n)
    int a = (x>>31) & 1;
    //x<0  -> 1
    //x>=0 -> 0
    int b =(!a) + (~0);
    //x<0  -> 0xff..ff
    //x>=0 -> 0
    int ans = (x+(a<<n)+b)>>n;
    return ans;
}
/* 
 * oneMoreThan - return 1 if y is one more than x, and 0 otherwise
 *   Examples oneMoreThan(0, 1) = 1, oneMoreThan(-1, 1) = 0
 *   Legal ops: ~ & ! ^ | + << >>
 *   Max ops: 15
 *   Rating: 2
 */
int oneMoreThan(int x, int y) {
    //compare y-1 & x
    //get y-1 by y+(~0)
    int ans = (y+(~0))^x;//(~0)=-1
    int b = 0;
    //ans=0 -> y-1==x;
    ans = !ans;
    b = (!!(x+y+1))|(!y);
    return ans&b;//ans&b
}
/*
 * satMul3 - multiplies by 3, saturating to Tmin or Tmax if overflow
 *  Examples: satMul3(0x10000000) = 0x30000000
 *            satMul3(0x30000000) = 0x7FFFFFFF (Saturate to TMax)
 *            satMul3(0x70000000) = 0x7FFFFFFF (Saturate to TMax)
 *            satMul3(0xD0000000) = 0x80000000 (Saturate to TMin)
 *            satMul3(0xA0000000) = 0x80000000 (Saturate to TMin)
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 *  Rating: 3
 */
int satMul3(int x) {
    //3*x=x+2*x
    //to deal with overflow, get the signs and calculate "ovfl"
    int ans1 = x<<1;
    int ans2 = x+ans1;
    int ng0 = (x>>31)&1;
    int ng1 = (ans1>>31)&1;
    int ng2 = (ans2>>31)&1;
    int ovfl = (ng0^ng1) | (ng1^ng2);//1-overflow, 0-ok
    //printf("ng1=%d,ng2=%d,ovfl=%d\n",ng1,ng2,ovfl);
    int ok = !ovfl;//0-overflow, 1-ok
    int ans3 = (~(ok+(~0)))&ans2;
    int ans4 = (1<<31)+(~0)+(ng0);
    ans4 = (~(ovfl+(~0)))&ans4;
    //printf("ans3=%d,ans4=%d\n",ans3,ans4);
    return ans3+ans4;
}
/* 
 * subOK - Determine if can compute x-y without overflow
 *   Example: subOK(0x80000000,0x80000000) = 1,
 *            subOK(0x80000000,0x70000000) = 0, 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 3
 */
int subOK(int x, int y) {
    //calculate x-y by calculating x+(-y)
    //~y+y=0xf..f=-1 -> -y=~y+1
    int a0 = !(x^y);
    int my = (~y) +1;
    int ans = x + my;
    int ngx = (x>>31)&1;
    int ngy = (y>>31)&1;
    int nga = (ans>>31)&1;
    int a1 = ngx^ngy;//0:safe
    int a2 = ngx^nga;//0:safe
    int a = a0 | !(a1) | (!a2);
    return a;
}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
    //the same as subOK
    int mx = (~x) +1;
    int ans = y+mx;
    int ngx = (x>>31)&1;
    int ngy = (y>>31)&1;
    int nga = (ans>>31)&1;//0:y-x>=0,ok
    int a1 = ngx&(!ngy);//1:x<0&y>=0,ok
    int a2 = (!ngx)&ngy;//1:x>=0&y<0
    int a = (a1|(!nga))&(!a2);
    return a;
}
/*
 * trueThreeFourths - multiplies by 3/4 rounding toward 0,
 *   avoiding errors due to overflow
 *   Examples: trueThreeFourths(11) = 8
 *             trueThreeFourths(-9) = -6
 *             trueThreeFourths(1073741824) = 805306368 (no overflow)
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 *   Rating: 4
 */
int trueThreeFourths(int x)
{
    //a failed attempt
    /*
    int a = (x>>31)&1;
    a = !a;
    //x>=0 -> a=1
    //x<0  -> a=0
    int b = (!a)+(~0);
    int qt = (x+(a<<2)+b)>>2;
    //printf("a=%x,b=%x,qt=%x\n",a,b,qt);
    return x+(~qt)+1;
    */
    //use bias to deal with overflow
    int x1=x&3;
    int x2=(x&1)<<1;
    int d=(x1+x2+((x>>31)&3))>>2;//bias
    return (x>>1)+(x>>2)+d;
}
/* 
 * float_twice - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_twice(unsigned uf) {
    //unsigned: 4 bytes = 32 bits
    //for unnormalized float, use left shift to get the answer
    //for normalized float, deal with the exponent
    //special processing for overflow(inf) & NaN
    int s = uf&(1<<31);
    int inf = 0xff<<23;
    int e = uf&inf;
    int f = uf-s-e;
    //printf("s=0x%x,e=0x%x,f=0x%x\n",s,e,f);
    if(e==0){
        return (f<<1)+s;
    }
    else{
        if(e>>23==0xff) return uf; 
        e = e + (1<<23);
        if((e>>23)==0xff) return s+inf;
        return s+f+e;
    }
    return 0;
}
/* 
 * float_i2f - Return bit-level equivalent of expression (float) x
 *   Result is returned as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point values.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned float_i2f(int x) {
    //if the result if normalized, find the position of decimal point
    //if the result is unnormalized, use right shift to get the answer
    //rounded to even if needed
    //attention to the direction of shift operation
    int s = x&0x80000000;
    int i = 30;
    int d;
    int e;
    if(x==0) return 0;
    if(s) {
        if(x==s) return (s+0x4f000000); 
        x=-x;
    }
    while(!(x&(1<<i))){
        i--;
    }
    //printf("x1=0x%x\n",x);
    x-=1<<i;
    d = i-23;
    if(d>=0) {
        int d1=1<<d;
        int d11=d1-1;
        int d2=d1>>1;
        int ovfl = x&d11;
        //printf("ovfl=0x%x,",ovfl);
        if(ovfl&d2){
            x += d11;
            //printf("x21=0x%x,",x);
            if((ovfl == d2) && (x&d1)) x-=d2; 
            //printf("x22=0x%x,",x);
        }
        x>>=d;
    }
    else x<<=(-d);
    e = 127+i;
    //int ans = s + (e<<23) +x;
    //printf("e=%d,x=0x%x,ans=0x%x\n",e,x,ans);
    //printf("s=0x%x,e=0x%x,f=0x%x,\n,i=%d,d=%d,ans=0x%x\n",s,e<<23,x,i,d,ans);
    return s + (e<<23) +x;//return ans;
}
/* 
 * float_f2i - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int float_f2i(unsigned uf) {
    //like float_i2f
    //special procession for inf/NaN/overflow
    //attention to the direction of shift operation
    int no_ans = 1<<31;
    int s = uf&no_ans;
    int inf = 0xff<<23;
    int e = uf&inf;
    int ee = (e>>23)-127;
    int f = uf-s-e;
    //printf("s=0x%x,e=0x%x,E=%d,f=0x%x\n",s,e,ee,f);
    int ans = (f+(1<<23));
    int d = ee-23;
    //printf("ans0=0x%x,d=%d\n",ans,d);
    if(e==inf) return no_ans;
    if(d>=0) {
        if(d<=7) ans <<= d;
        else return no_ans;
    }
    else {
        if(d>=-31) ans >>=(-d);
        else return 0;
    }
    if(s) return -ans;
    return ans;
}
/* 
 * float_pwr2 - Return bit-level equivalent of the expression 2.0^x
 *   (2.0 raised to the power x) for any 32-bit integer x.
 *
 *   The unsigned value that is returned should have the identical bit
 *   representation as the single-precision floating-point number 2.0^x.
 *   If the result is too small to be represented as a denorm, return
 *   0. If too large, return +INF.
 * 
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. Also if, while 
 *   Max ops: 30 
 *   Rating: 4
 */
unsigned float_pwr2(int x) {
    //left shift & right shift
    //(float,hex)2=0x40000000, E=1, e=128,bias=127
    //for normalized float,
    //max: e=255, E=127
    //min: E=1-bias=-126
    //for unnormalized float,
    //E=-125~-149
    if(x>127) return 0xff<<23;
    if(x<-149) return 0;
    if(x<-126) return 1<<(x+149);
    return (x+127)<<23;
}

//./bddcheck/check.pl