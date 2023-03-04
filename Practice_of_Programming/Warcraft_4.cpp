#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define INF 10005
class Warrior;
class HeadQt;
class City;
class Weapon;
int hour = 0;
bool EndGame = 0;

enum ColorType { red = 0, blue = 1 };
enum WarriorType { dragon = 0, ninja, iceman, lion, wolf };
enum WeaponType { sword = 0, bomb, arrow };
enum FightingResult { redwin = 0, bluewin, bothdead, bothalive};
enum AttackOrder { secondattack=0, firstattack };
string colorName[2] = { "red", "blue" };
string wName[5] = { "dragon", "ninja", "iceman", "lion", "wolf" };
string weaponName[3] = { "sword","bomb","arrow" };;
int seq[2][5] = { {2, 3, 4, 1, 0}, {3, 0, 1, 2, 4} };

int iniHp[5]{ 0 };
int iniForce[5]{ 0 };
int LoyaltyLoss = 0;
int ArrowAttack = 0;
int CityNum = 0;
int StopTime = 0;
int ElementGain[2] {0};

inline void TimeOp(int minute) {
    if (hour < 10) cout << "00" << hour;
    else if (hour < 100) cout << 0 << hour;
    else cout << hour;
    if (minute < 10) cout << ":0" << minute << ' ';
    else cout << ":" << minute << ' ';
}
inline bool TimeOut(int minute) {
    if (EndGame) return 1;
    if (hour * 60 + minute > StopTime) return 1;
    return 0;
}
class Weapon {
public:
    int ctg=-1;
    int Attack=0;
    int ArrowLife = -1;
    bool Broken = 1;

    inline bool WeaponInitial(int c,int a){
        ctg=c;
        Broken=0;
        switch (c){
        case sword:
            Attack=a;
            if(a==0) Broken=1;
            break;
        case arrow:
            Attack=ArrowAttack;
            ArrowLife=3;
            break;
        case bomb:
            Attack=INF;
            break;
        }
        return !Broken;
    }
};
class City {
public:
    int flag=-1;//no flag
    int LastGame = -1;
    int ThisGame = -1;
    int CityNo;
    int CityHq=0;
    City() :CityNo(0) {};
    City(int n) :CityNo(n) {};
    int RedWarrior = -1;
    int BlueWarrior = -1;
    inline void LionRunAway();
    inline void MarchReport();
    inline void WarriorTakeElements();
    inline void WarriorUseBomb();
    inline void WarriorFireArrows();
    inline int FakeFighting();
    inline void Fighting();
    friend inline void WolfTakeWeapons(Warrior &, Warrior &);
    inline void WeaponReport(int);
    inline void HeadQtRewardsWarrior(int);
};
class Warrior {
    public:
    int Position;
    bool death = 0;
    int wNo;//number
    int wHp;//health point
    int wType;
    int wColor;
    int wForce=0;
    Weapon weapon[3];
    bool HaveWeapon[3]{0};
    int loyalty;
    float morale=0;

    Warrior() :wNo(-1), wHp(-1) {};
    Warrior(int no, const int& hp, int c) :wNo(no), wHp(hp), wColor(c) {
        if (c == red) Position = 0;
        else Position = CityNum + 1;
    };

    //for lion:
    bool LionRunAway() {
        if(wType!=lion) return 0;
        if (loyalty <= 0) {
            TimeOp(5);
            printf("%s lion %d ran away\n", colorName[wColor].c_str(), wNo);
            death=1;
            return 1;
        }
        return 0;
    }
    inline void LionLoseLoyalty() {
        if(wType==lion)
            loyalty-=LoyaltyLoss;
    }

    //for iceman:
    inline void IcemanLoseElements(){
        if(wType!=iceman) return;
        if((wColor==red && Position%2==0) || (wColor==blue && (CityNum+1-Position)%2==0)){
            wForce+=20;
            wHp-=9;
            if(wHp<=0) wHp=1;
        }
    }; 

    //for dragon:
    inline bool DragonGetMorale(bool wins){
        if(wType!=dragon) return 0;
        if(wins) morale+=0.2;
        else morale-=0.2;
        return (morale>0.8);
    }

    inline void MarchReport();
    inline int UseWeapon(bool);
    inline void WeaponReport() {
        TimeOp(55);
        printf("%s %s %d has ", 
            colorName[wColor].c_str(), wName[wType].c_str(), wNo);
        if(HaveWeapon[arrow]) 
            printf("arrow(%d)",weapon[arrow].ArrowLife);
        if(HaveWeapon[bomb]){
            if(HaveWeapon[arrow]) cout<<',';
            cout<<"bomb";
        }
        if(HaveWeapon[sword]){
            if(HaveWeapon[bomb]||HaveWeapon[arrow]) cout<<',';
            printf("sword(%d)",weapon[sword].Attack);
        }
        if(!HaveWeapon[sword]&&!HaveWeapon[bomb]&&!HaveWeapon[arrow])
            cout<<"no weapon";
        cout << endl;
    }
};
class Dragon :public Warrior {
    public:
    Dragon(int no, int c, float m) :Warrior(no, iniHp[dragon], c){
        wType = dragon;
        wForce = iniForce[dragon];
        HaveWeapon[no%3]=weapon[no%3].WeaponInitial(no%3,(int)wForce*.2);
        morale=m;
        printf("Its morale is %.2f\n",morale);
    };
};
class Ninja :public Warrior {
public:
    Ninja(int no, int c) :Warrior(no, iniHp[ninja], c) {
        wType = ninja;
        wForce = iniForce[ninja];
        HaveWeapon[no%3]=weapon[no%3].WeaponInitial(no%3,(int)wForce*.2);
        HaveWeapon[(no+1)%3]=weapon[(no+1)%3].WeaponInitial((no+1)%3,(int)wForce*.2);
    };

};
class Iceman :public Warrior {
public:
    Iceman(int no, int c) :Warrior(no, iniHp[iceman], c) {
        wType = iceman;
        wForce = iniForce[iceman];
        HaveWeapon[no%3]=weapon[no%3].WeaponInitial(no%3,(int)wForce*.2);
    };

};
class Lion :public Warrior {
    public:
    Lion(int no, int c, int l) :Warrior(no, iniHp[lion], c) {
        loyalty=l;
        wForce = iniForce[lion];
        wType = lion;
        printf("Its loyalty is %d\n", loyalty);
    };
};
class Wolf :public Warrior {
public:
    Wolf(int no, int c) :Warrior(no, iniHp[wolf], c) {
        wForce = iniForce[wolf];
        wType = wolf;
    };

};
class HeadQt {
public:
    int hqLife;
    bool color;
    int nxWarrior = 0;
    int WNum = 0;
    int EnemyNum=0;

    HeadQt() :hqLife(0), color(0) {};
    HeadQt(int l, bool c) :hqLife(l), color(c) {};

    bool createWarrior();
    void ElementReport() {
        TimeOp(50);
        printf("%d elements in %s headquarter\n", hqLife, colorName[color].c_str());
        return;
    }
    void March();
    void HeadQtTaken();
};

HeadQt RHeadQt, BHeadQt;
vector<City> city;
vector<Warrior> army[2];

inline bool HeadQt::createWarrior() {
    int ty = seq[color][nxWarrior];
    if (hqLife < iniHp[ty])
        return 0;

    //create
    TimeOp(0);
    printf("%s %s %d born\n", colorName[color].c_str(), wName[ty].c_str(), WNum + 1);

    switch (ty) {
    case dragon: {
        Dragon w1(WNum + 1, color, 1.0*(hqLife-iniHp[dragon])/iniHp[dragon]);
        army[color].push_back(w1);
        break; }
    case ninja: {
        Ninja w2(WNum + 1, color);
        army[color].push_back(w2);
        break; }
    case iceman: {
        Iceman w3(WNum + 1, color);
        army[color].push_back(w3);
        break; }
    case lion: {
        Lion w4(WNum + 1, color, hqLife - iniHp[lion]);
        army[color].push_back(w4);
        break; }
    case wolf: {
        Wolf w5(WNum + 1, color);
        army[color].push_back(w5);
        break; }
    }
    if (color == red) {
        city[0].RedWarrior = WNum;
    }
    else {
        city[CityNum + 1].BlueWarrior = WNum;
    }
    hqLife -= iniHp[ty];
    WNum++;
    nxWarrior++;
    nxWarrior %= 5;
    return 1;
}
inline void City::LionRunAway() {
    if (RedWarrior != -1)
        if (army[red][RedWarrior].wType == lion && CityNo!=CityNum+1)
            if (army[red][RedWarrior].LionRunAway()) {
                RedWarrior = -1;
            }
    if (BlueWarrior != -1)
        if (army[blue][BlueWarrior].wType == lion && CityNo!=0)
            if (army[blue][BlueWarrior].LionRunAway()) {
                BlueWarrior = -1;
            }
}
inline void City::MarchReport() {
    if (RedWarrior != -1)
        army[red][RedWarrior].MarchReport();
    if (BlueWarrior != -1)
        army[blue][BlueWarrior].MarchReport();
}
inline void HeadQt::March() {
    int s = army[color].size();
    if (color == red) {
        for (int i = 0; i < s; i++) 
            if(!army[red][i].death){
                if (army[red][i].Position > CityNum) continue;
                int c = army[red][i].Position;
                army[red][i].Position++;
                if(c+1 == CityNum+1){
                    BHeadQt.EnemyNum++;
                }
                if(city[c].RedWarrior==i)
                    city[c].RedWarrior = -1;
                city[c + 1].RedWarrior = i;
                army[red][i].IcemanLoseElements();
            }
    }
    else {
        for (int i = s-1; i >=0; i--) 
            if(!army[blue][i].death){
            if (army[blue][i].Position == 0) continue;
            int c = army[blue][i].Position;
            army[blue][i].Position--;
            if(c-1 == 0){
                    RHeadQt.EnemyNum++;
            }            
            if(city[c].BlueWarrior==i)
                city[c].BlueWarrior = -1;
            city[c - 1].BlueWarrior = i;
            army[blue][i].IcemanLoseElements();
        }
    }
}
inline void HeadQt::HeadQtTaken(){
    if(color==red && city[0].BlueWarrior!=-1){
        EndGame=1;
        Warrior & b=army[blue][city[0].BlueWarrior];
        TimeOp(10);
        printf("blue %s %d reached red headquarter with %d elements and force %d\n",
            wName[b.wType].c_str(),b.wNo,b.wHp,b.wForce);
        TimeOp(10);
        printf("red headquarter was taken\n");
    }
    if(color==blue && city[CityNum+1].RedWarrior!=-1){
        EndGame=1;
        Warrior & r=army[red][city[CityNum+1].RedWarrior];
        TimeOp(10);
        printf("red %s %d reached blue headquarter with %d elements and force %d\n",
            wName[r.wType].c_str(),r.wNo,r.wHp,r.wForce);
        TimeOp(10);
        printf("blue headquarter was taken\n");
    }
}
inline void City::WarriorTakeElements(){
    if(RedWarrior != -1 && BlueWarrior == -1){
        Warrior & r = army[red][RedWarrior];
        TimeOp(30);
        printf("red %s %d earned %d elements for his headquarter\n",
            wName[r.wType].c_str(),r.wNo, CityHq);
        RHeadQt.hqLife+=CityHq;
        CityHq=0;
    }
    if(BlueWarrior != -1 && RedWarrior == -1){
        Warrior & b = army[blue][BlueWarrior];
        TimeOp(30);
        printf("blue %s %d earned %d elements for his headquarter\n",
            wName[b.wType].c_str(),b.wNo, CityHq);
        BHeadQt.hqLife+=CityHq;
        CityHq=0;
    }

}
inline void City::WarriorFireArrows(){
    if(RedWarrior!=-1 && CityNo+1<=CityNum)
        if(city[CityNo+1].BlueWarrior!=-1 && army[red][RedWarrior].HaveWeapon[arrow]){
            Warrior & r=army[red][RedWarrior];
            Warrior & b=army[blue][city[CityNo+1].BlueWarrior];
            r.weapon[arrow].ArrowLife--;
            if(r.weapon[arrow].ArrowLife==0){
                r.weapon[arrow].Broken=1;
                r.HaveWeapon[arrow]=0;
            }
            b.wHp -= ArrowAttack;
            TimeOp(35);
            printf("red %s %d shot",wName[r.wType].c_str(),r.wNo);
            if(b.wHp<=0)
                printf(" and killed blue %s %d",wName[b.wType].c_str(),b.wNo);
            cout<<endl;
        }
    if(BlueWarrior!=-1 && CityNo-1>=1)
        if(city[CityNo-1].RedWarrior!=-1 && army[blue][BlueWarrior].HaveWeapon[arrow]){
            Warrior & b=army[blue][BlueWarrior];
            Warrior & r=army[red][city[CityNo-1].RedWarrior];
            b.weapon[arrow].ArrowLife--;
            if(b.weapon[arrow].ArrowLife==0){
                b.weapon[arrow].Broken=1;
                b.HaveWeapon[arrow]=0;
            }
            r.wHp -= ArrowAttack;
            TimeOp(35);
            printf("blue %s %d shot",wName[b.wType].c_str(),b.wNo);
            if(r.wHp<=0)
                printf(" and killed red %s %d",wName[r.wType].c_str(),r.wNo);
            cout<<endl;
        }
}
inline int City::FakeFighting(){
    Warrior r=army[red][RedWarrior];
    Warrior b=army[blue][BlueWarrior];
    int EndState;
    int sidetomove;
    if(flag==red || (flag==-1 && CityNo%2==1)) sidetomove=red;
    else sidetomove=blue;
    if(r.wHp>0&&b.wHp<=0) EndState=redwin;
    else if(b.wHp>0&&r.wHp<=0) EndState=bluewin;
    else if(b.wHp<=0&&r.wHp<=0) EndState=bothdead;
    else{
        if(sidetomove == red){
            b.wHp -= r.UseWeapon(firstattack);
            if(b.wHp>0 && b.wType!=ninja){
                r.wHp -= b.UseWeapon(secondattack);
            }
        }
        else{
            r.wHp -= b.UseWeapon(firstattack);
            if(r.wHp>0 && r.wType!=ninja)
                b.wHp -= r.UseWeapon(secondattack);
        }
        if(r.wHp>0 && b.wHp<=0) EndState = redwin;
        else if(b.wHp>0 && r.wHp<=0) EndState = bluewin;
        else EndState = bothalive;
    }
    return EndState;
}
//⭐
inline void WolfTakeWeapons(Warrior & winner, Warrior & loser){
    if(winner.wType!=wolf) return;
    for(int i=0;i<3;i++)
        if(loser.HaveWeapon[i] && !winner.HaveWeapon[i]){
            winner.HaveWeapon[i]=1;
            winner.weapon[i] = loser.weapon[i];
        }
    return;
}
inline void City::WarriorUseBomb(){
    if(RedWarrior==-1 || BlueWarrior==-1) return;
    int result = FakeFighting();
    Warrior &r = army[red][RedWarrior];
    Warrior &b = army[blue][BlueWarrior];
    if(r.wHp<=0 || b.wHp<=0) return;
    bool AllKilled = 0;
    switch(result){
        case redwin:
            if(b.HaveWeapon[bomb]){
                TimeOp(38);
                printf("blue %s %d used a bomb and killed red %s %d\n",
                    wName[b.wType].c_str(), b.wNo, wName[r.wType].c_str(), r.wNo);
                AllKilled=1;
            }
            break;
        case bluewin:
            if(r.HaveWeapon[bomb]){
                TimeOp(38);
                printf("red %s %d used a bomb and killed blue %s %d\n",
                    wName[r.wType].c_str(), r.wNo, wName[b.wType].c_str(), b.wNo);
                AllKilled=1;
            }           
            break;
        case bothalive:
            break;
        case bothdead:
            if(r.HaveWeapon[bomb]){
                TimeOp(38);
                printf("red %s %d used a bomb and killed blue %s %d\n",
                    wName[r.wType].c_str(), r.wNo, wName[b.wType].c_str(), b.wNo);
                AllKilled=1;
            }
            else if(b.HaveWeapon[bomb]){
                TimeOp(38);
                printf("blue %s %d used a bomb and killed red %s %d\n",
                    wName[b.wType].c_str(), b.wNo, wName[r.wType].c_str(), r.wNo);
                AllKilled=1;
            }
            break;
    }
    if(AllKilled) {
        RedWarrior = BlueWarrior = -1;
        r.death = b.death = 1;
    }
}
inline void City::Fighting() {
    ThisGame = -1;
    if(RedWarrior==-1 && BlueWarrior==-1) return;
    if(RedWarrior==-1 && BlueWarrior!=-1) {
        Warrior & b = army[blue][BlueWarrior];
        if(b.wHp<=0) {
            b.death=1;
            BlueWarrior=-1;
        }
        return;
    }
    if(BlueWarrior==-1 && RedWarrior!=-1){
        Warrior & r = army[red][RedWarrior];
        if(r.wHp<=0){
            r.death=1;
            RedWarrior=-1;
        }
        return;
    }
    Warrior & r=army[red][RedWarrior];
    Warrior & b=army[blue][BlueWarrior];
    if(r.wHp<=0 && b.wHp<=0){
        r.death = b.death = 1;
        RedWarrior = BlueWarrior = -1;
    }
    int EndState;
    bool ArrowUsed = 1;
    int sidetomove;
    int LionInheritance[2]{0};
    if(r.wType==lion && r.wHp>0) LionInheritance[red]=r.wHp;
    if(b.wType==lion && b.wHp>0) LionInheritance[blue]=b.wHp;
    if(flag==red || (flag==-1 && CityNo%2==1)) sidetomove=red;
    else sidetomove=blue;
    if(r.wHp>0&&b.wHp<=0) EndState=redwin;
    else if(b.wHp>0&&r.wHp<=0) EndState=bluewin;
    else if(b.wHp<=0&&r.wHp<=0) return;
    else{
        ArrowUsed = 0;
        if(sidetomove == red){
            b.wHp -= r.UseWeapon(firstattack);
            TimeOp(40);
            printf("red %s %d attacked blue %s %d in city %d with %d elements and force %d\n",
                wName[r.wType].c_str(), r.wNo, wName[b.wType].c_str(), b.wNo, CityNo, r.wHp, r.wForce);
            if(b.wHp>0 && b.wType!=ninja){
                r.wHp -= b.UseWeapon(secondattack);
                TimeOp(40);
                printf("blue %s %d fought back against red %s %d in city %d\n",
                    wName[b.wType].c_str(), b.wNo, wName[r.wType].c_str(), r.wNo, CityNo);
            }
        }
        else{
            r.wHp -= b.UseWeapon(firstattack);
            TimeOp(40);
            printf("blue %s %d attacked red %s %d in city %d with %d elements and force %d\n",
                wName[b.wType].c_str(), b.wNo, wName[r.wType].c_str(), r.wNo, CityNo, b.wHp, b.wForce);
            if(r.wHp>0 && r.wType!=ninja){
                b.wHp -= r.UseWeapon(secondattack);
                TimeOp(40);
                printf("red %s %d fought back against blue %s %d in city %d\n",
                    wName[r.wType].c_str(), r.wNo, wName[b.wType].c_str(), b.wNo, CityNo);
            }
        }
        if(r.wHp>0 && b.wHp<=0) EndState = redwin;
        else if(b.wHp>0 && r.wHp<=0) EndState = bluewin;
        else EndState = bothalive;
    }
    switch (EndState){
    case redwin:{
        //8: A warrior is killed
        if(!ArrowUsed){
            TimeOp(40);
            printf("blue %s %d was killed in city %d\n",
                wName[b.wType].c_str(), b.wNo, CityNo);
        }
        BlueWarrior=-1;
        b.death=1;
        //9: Dragon yells
        if(r.DragonGetMorale(1))
            if(sidetomove == red) {
            TimeOp(40);
            printf("red dragon %d yelled in city %d\n", r.wNo, CityNo);
        }
        //10: Warrior gets elements
        TimeOp(40);
        printf("red %s %d earned %d elements for his headquarter\n", 
            wName[r.wType].c_str(), r.wNo, CityHq);
        ElementGain[red] += CityHq;
        CityHq=0;
        //11: Flag is raised
        if(flag!=red && LastGame==EndState){
            flag=red;
            TimeOp(40);
            printf("red flag raised in city %d\n",CityNo);
        }
        //wolf takes weapon
        WolfTakeWeapons(r,b);
        //dead lion's inheritance
        r.wHp+=LionInheritance[blue];
        break;
    }
    case bluewin:{
        //8: A warrior is killed
        if(!ArrowUsed){
            TimeOp(40);
            printf("red %s %d was killed in city %d\n",
                wName[r.wType].c_str(), r.wNo, CityNo);
        }
        RedWarrior=-1;
        r.death=1;
        //9: Dragon yells
        if(b.DragonGetMorale(1))
            if(sidetomove == blue) {
            TimeOp(40);
            printf("blue dragon %d yelled in city %d\n",b.wNo, CityNo);
        }
        //10: Warrior gets elements
        TimeOp(40);
        printf("blue %s %d earned %d elements for his headquarter\n", 
            wName[b.wType].c_str(), b.wNo, CityHq);
        ElementGain[blue] += CityHq;
        CityHq=0;
        //11: Flag is raised
        if(flag!=blue && LastGame==EndState){
            flag=blue;
            TimeOp(40);
            printf("blue flag raised in city %d\n",CityNo);
        }
        //wolf takes weapon
        WolfTakeWeapons(b,r);
        //dead lion's inheritance
        b.wHp+=LionInheritance[red];
        break;
    }
    case bothalive:{
        if(r.DragonGetMorale(0))        
            if(sidetomove==red){
            TimeOp(40);
            printf("red dragon %d yelled in city %d\n", r.wNo, CityNo);
            }
        if(b.DragonGetMorale(0))
            if(sidetomove==blue){
            TimeOp(40);
            printf("blue dragon %d yelled in city %d\n", b.wNo, CityNo);
            }
        if(r.wType==lion) r.loyalty-=LoyaltyLoss;
        if(b.wType==lion) b.loyalty-=LoyaltyLoss;     
        break;
    }
    case bothdead:{
        BlueWarrior = RedWarrior = -1;
        b.death = r.death = 1;
        break;
    }
    }
    LastGame = ThisGame = EndState; 
}
inline int Warrior::UseWeapon(bool fir){
    int ans = 0;
    if(HaveWeapon[sword]){
        ans = weapon[sword].Attack;
        weapon[sword].Attack = (int) weapon[sword].Attack * 0.8;
        if(weapon[sword].Attack==0){
            weapon[sword].Broken=1;
            HaveWeapon[sword] = 0;
        }
    }
    ans += fir ? wForce : wForce/2;
    return ans;
}
inline void City::HeadQtRewardsWarrior(int color){
    if(color==red && ThisGame==redwin){
        if(RHeadQt.hqLife>=8){
            army[red][RedWarrior].wHp+=8;
            RHeadQt.hqLife-=8;
        }
    }
    if(color==blue && ThisGame==bluewin){
        if(BHeadQt.hqLife>=8){
            army[blue][BlueWarrior].wHp+=8;
            BHeadQt.hqLife-=8;
        }
    }
}
inline void City::WeaponReport(int color) {
    if (color==red && RedWarrior != -1)
        army[red][RedWarrior].WeaponReport();
    if (color==blue && BlueWarrior != -1)
        army[blue][BlueWarrior].WeaponReport();
}
void Warrior::MarchReport() {
    if (Position>0 && Position<=CityNum) {
        TimeOp(10);
        printf("%s %s %d marched to city %d with %d elements and force %d\n",
            colorName[wColor].c_str(), wName[wType].c_str(), wNo, Position, wHp, wForce);
    }
    else if(!death){
        TimeOp(10);
        printf("%s %s %d reached %s headquarter with %d elements and force %d\n",
           colorName[wColor].c_str(), wName[wType].c_str(), wNo, colorName[1 - wColor].c_str(), wHp, wForce);
        death=1;
        if((wColor==red && BHeadQt.EnemyNum==2) || (wColor==blue && RHeadQt.EnemyNum==2)){
            TimeOp(10);
            printf("%s headquarter was taken\n", colorName[1 - wColor].c_str());
            EndGame = 1;
        }
    }
}
int main() {
    int n, nn, i;
    cin >> n;
    for (nn = 1; nn <= n; nn++) {
        cout << "Case " << nn << ':'<< endl;
        hour = 0;
        EndGame = 0;
        int m;
        cin >> m >> CityNum >> ArrowAttack >> LoyaltyLoss >> StopTime;
        city.clear();
        army[red].clear();
        army[blue].clear();
        HeadQt RH(m, red), BH(m, blue);
        RHeadQt = RH;
        BHeadQt = BH;
        for (i = 0; i <= CityNum + 1; i++) {
            City c(i);
            city.push_back(c);
        }

        for (i = 0; i < 5; i++)
            cin >> iniHp[i];
        for (i =0;i<5;i++)
            cin>>iniForce[i];

        while (1) {
            //00: new warriors are created
            if (TimeOut(0)) break;
            RHeadQt.createWarrior();
            BHeadQt.createWarrior();

            //05: lions run away
            if (TimeOut(5)) break;
            for (i = 0; i <= CityNum+1; i++)
                city[i].LionRunAway();

            //10: warriors match on
            if (TimeOut(10)) break;
            RHeadQt.March();
            BHeadQt.March();
            for (i = 0; i <= CityNum+1; i++) {
                city[i].MarchReport();
            }

            //20: cities generate elements
            if(TimeOut(20)) break;
            for(i=1;i<=CityNum;i++)
                city[i].CityHq += 10;

            //30: warriors without enemy take elements
            if(TimeOut(30)) break;
            for(i=1;i<=CityNum;i++)
                city[i].WarriorTakeElements();

            //35: warriors use arrows. !!!:two warriors might fired at each other in a time
            if (TimeOut(35)) break;
            for (i = 1; i <= CityNum; i++)
                city[i].WarriorFireArrows();
            

            //38: warriors use the bomb to perish together
            if(TimeOut(38)) break;
            for(i=1;i<=CityNum;i++)
                city[i].WarriorUseBomb();
            

            //40: fighting
            ElementGain[red] = ElementGain[blue] = 0;
            if (TimeOut(40)) break;
            for (i = 1; i <= CityNum; i++)
                city[i].Fighting();
            //Headquaters reward warriors
            for(i = 1; i <= CityNum; i++)
                city[i].HeadQtRewardsWarrior(red);
            for(i = CityNum; i >= 1; i--)
                city[i].HeadQtRewardsWarrior(blue);                //Headquaters get elements of cities
            RHeadQt.hqLife += ElementGain[red];
            BHeadQt.hqLife += ElementGain[blue];

            //50: Headquaters report the number of elements
            if (TimeOut(50)) break;
            RHeadQt.ElementReport();
            BHeadQt.ElementReport();

//            cout << "Fighting finished " << endl;
            
            //55: warriors report about the weapons
            if (TimeOut(55)) break;
            for (i = 0; i <= CityNum+1; i++)
                city[i].WeaponReport(red);
            for (i = 0; i <= CityNum+1; i++)
                city[i].WeaponReport(blue);            
            hour++;
        }
    }
    return 0;
}