#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
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
string colorName[2] = { "red", "blue" };
string wName[5] = { "dragon", "ninja", "iceman", "lion", "wolf" };
string weaponName[3] = { "sword","bomb","arrow" };;
int seq[2][5] = { {2, 3, 4, 1, 0}, {3, 0, 1, 2, 4} };

int iniHp[5]{ 0 };
int iniForce[5]{ 0 };
int LoyaltyLoss = 0;
int CityNum = 0;
int StopTime = 0;

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

class City {
public:
    int CityNo;
    City() :CityNo(0) {};
    City(int n) :CityNo(n) {};
    int RedWarrior = -1;
    int BlueWarrior = -1;
    inline void LionRunAway();
    inline void MarchReport();
    inline void WolfTakeWeapons();
    inline void Fighting();
    inline void WeaponReport();
};
class Warrior {
    public:
    int Position;
    bool death = 0;
    int wNo;//number
    int wHp;//health point
    int wType;
    int wColor;
    int wForce;
    vector<Weapon> weapon;
    int weaponNum = 0;
    int AllWeaponNum = 0;
    int DWeaponNum[3];

    int loyalty;

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
        if(wType==iceman)
            wHp-=wHp/10;
    }; 

    inline void MarchReport();
    inline int UseWeapon(int i);
    inline void WeaponReport() {
        TimeOp(55);
        printf("%s %s %d has %d sword %d bomb %d arrow and %d elements\n", 
            colorName[wColor].c_str(), wName[wType].c_str(), wNo, DWeaponNum[sword], DWeaponNum[bomb], DWeaponNum[arrow], wHp);
    }
};
class Weapon {
public:
    int ctg;
    int ArrowLife = -1;
    bool Broken = 0;
    Weapon(int c) :ctg(c) {
        if (c == arrow) ArrowLife = 2;
    };
    friend bool operator<(const Weapon& w1, const Weapon& w2) {
        if(w1.Broken) return 0;
        if(w2.Broken) return 1;
        if (w1.ctg < w2.ctg) return 1;
        if (w1.ctg == arrow && w2.ctg == arrow && w1.ArrowLife < w2.ArrowLife) return 1;
        return 0;
    }
    friend bool operator>(const Weapon& w1, const Weapon& w2) {
        if(w1.Broken) return 1;
        if(w2.Broken) return 0;
        if (w1.ctg > w2.ctg) return 1;
        if (w1.ctg == arrow && w2.ctg == arrow && w1.ArrowLife > w2.ArrowLife) return 1;
        return 0;
    }
};
class Dragon :public Warrior {
    public:
    Dragon(int no, int c) :Warrior(no, iniHp[dragon], c) {
        wType = dragon;
        wForce = iniForce[dragon];
        Weapon w(no % 3);
        weapon.push_back(w);
        AllWeaponNum = weaponNum = 1;
        DWeaponNum[0]=DWeaponNum[1]=DWeaponNum[2]=0;
        DWeaponNum[no % 3] = 1;
    };


};
class Ninja :public Warrior {
public:
    Ninja(int no, int c) :Warrior(no, iniHp[ninja], c) {
        wType = ninja;
        wForce = iniForce[ninja];
        Weapon w1(no % 3), w2((no + 1) % 3);
        weapon.push_back(w1);
        weapon.push_back(w2);
        if (w1 > w2) swap(weapon[0], weapon[1]);
        AllWeaponNum = weaponNum = 2;
        DWeaponNum[0]=DWeaponNum[1]=DWeaponNum[2]=0;
        DWeaponNum[no % 3] = 1;
        DWeaponNum[(no + 1) % 3] = 1;
    };

};
class Iceman :public Warrior {
public:
    Iceman(int no, int c) :Warrior(no, iniHp[iceman], c) {
        wType = iceman;
        wForce = iniForce[iceman];
        Weapon w(no % 3);
        weapon.push_back(w);
        AllWeaponNum = weaponNum = 1;
        DWeaponNum[0]=DWeaponNum[1]=DWeaponNum[2]=0;        
        DWeaponNum[no % 3] = 1;
    };

};
class Lion :public Warrior {
    public:
    Lion(int no, int c, int l) :Warrior(no, iniHp[lion], c) {
        loyalty=l;
        wForce = iniForce[lion];
        wType = lion;
        Weapon w(no%3);
        weapon.push_back(w);
        AllWeaponNum = weaponNum = 1;
        DWeaponNum[0]=DWeaponNum[1]=DWeaponNum[2]=0;
        DWeaponNum[no % 3] = 1;
        printf("Its loyalty is %d\n", loyalty);
    };
};
class Wolf :public Warrior {
public:
    Wolf(int no, int c) :Warrior(no, iniHp[wolf], c) {
        wForce = iniForce[wolf];
        wType = wolf;
        DWeaponNum[0]=DWeaponNum[1]=DWeaponNum[2]=weaponNum=0;
    };

};
class HeadQt {
public:
    int hqLife;
    bool color;
    int nxWarrior = 0;
    int hqWSize[5]{ 0 };
    int WNum = 0, WSize = 0;

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
        Dragon w1(WNum + 1, color);
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
    hqWSize[ty] ++;
    WNum++;
    WSize++;
    nxWarrior++;
    nxWarrior %= 5;
    return 1;
}
inline void City::LionRunAway() {
    if (RedWarrior != -1)
        if (army[red][RedWarrior].wType == lion && CityNo!=CityNum+1)
            if (army[red][RedWarrior].LionRunAway()) {
                RHeadQt.WSize--;
                RHeadQt.hqWSize[lion]--;
                RedWarrior = -1;
            }
    if (BlueWarrior != -1)
        if (army[blue][BlueWarrior].wType == lion && CityNo!=0)
            if (army[blue][BlueWarrior].LionRunAway()) {
                BHeadQt.WSize--;
                BHeadQt.hqWSize[lion]--;
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
                if(city[c].RedWarrior==i)
                    city[c].RedWarrior = -1;
                city[c + 1].RedWarrior = i;
                army[red][i].LionLoseLoyalty();
                army[red][i].IcemanLoseElements();
            }
    }
    else {
        for (int i = s-1; i >=0; i--) 
            if(!army[blue][i].death){
            if (army[blue][i].Position == 0) continue;
            int c = army[blue][i].Position;
            army[blue][i].Position--;
            if(city[c].BlueWarrior==i)
                city[c].BlueWarrior = -1;
            city[c - 1].BlueWarrior = i;
            army[blue][i].LionLoseLoyalty();
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
inline void City::WolfTakeWeapons() {
    if (RedWarrior != -1 && BlueWarrior != -1) {
        Warrior & r = army[red][RedWarrior];
        Warrior & b = army[blue][BlueWarrior];
        int takenum=0;
        if (r.wType == wolf && b.wType != wolf && b.weaponNum > 0 && r.weaponNum < 10) {
            int take = b.weapon[0].ctg;
            if (take != arrow)
                while (r.weaponNum < 10) {
                    Weapon w=b.weapon[0];
                    r.weapon.push_back(w);
                    b.weapon.erase(b.weapon.begin());
                    r.weaponNum++;
                    r.AllWeaponNum++;
                    r.DWeaponNum[take]++;
                    b.weaponNum--;
                    b.AllWeaponNum--;
                    b.DWeaponNum[take]--;
                    takenum++;
                    if (b.DWeaponNum[take] == 0) break;
                }
            else  while (r.weaponNum < 10) {
                Weapon w=b.weapon[b.weaponNum-1];
                r.weapon.push_back(w);
                b.weapon.erase(b.weapon.begin()+b.weaponNum-1);
                r.weaponNum++;
                r.AllWeaponNum++;
                r.DWeaponNum[take]++;
                b.weaponNum--;
                b.AllWeaponNum--;
                b.DWeaponNum[take]--;
                takenum++;
                if (b.DWeaponNum[take] == 0) break;
            }
            sort(r.weapon.begin(), r.weapon.end());
            sort(b.weapon.begin(), b.weapon.end());
            TimeOp(35);
            printf("red wolf %d took %d %s from blue %s %d in city %d\n",
                r.wNo,takenum,weaponName[take].c_str(),wName[b.wType].c_str(),b.wNo,CityNo);
        }
        else if (b.wType == wolf && r.wType != wolf && r.weaponNum > 0 && b.weaponNum < 10) {
            int take = r.weapon[0].ctg;
            if (take != arrow)
                while (b.weaponNum < 10) {
                    Weapon w=r.weapon[0];
                    b.weapon.push_back(w);
                    r.weapon.erase(r.weapon.begin());
                    b.weaponNum++;
                    b.AllWeaponNum++;
                    b.DWeaponNum[take]++;
                    r.weaponNum--;
                    r.AllWeaponNum--;
                    r.DWeaponNum[take]--;
                    takenum++;
                    if (r.DWeaponNum[take] == 0) break;
                }
            else
                while (b.weaponNum < 10) {
                    Weapon w=r.weapon[r.weaponNum-1];
                    b.weapon.push_back(w);
                    r.weapon.pop_back();
                    b.weaponNum++;
                    b.AllWeaponNum++;
                    b.DWeaponNum[take]++;
                    r.weaponNum--;
                    r.AllWeaponNum--;
                    r.DWeaponNum[take]--;
                    takenum++;
                    if (r.DWeaponNum[take] == 0) break;
                }
            sort(r.weapon.begin(), r.weapon.end());
            sort(b.weapon.begin(), b.weapon.end());            
            TimeOp(35);
            printf("blue wolf %d took %d %s from red %s %d in city %d\n",
                b.wNo,takenum,weaponName[take].c_str(),wName[r.wType].c_str(),r.wNo,CityNo);

        }
    }
}
inline int Warrior::UseWeapon(int i){
        int rv=0;
        switch(weapon[i].ctg){
            case sword:
                rv = floor(0.2*wForce);
                break;
            case bomb:
                rv = floor(0.4*wForce);
                break;
            case arrow:
                rv = floor(0.3*wForce);
                break;
        }
        return rv;
}
inline void TakeWeapon(Warrior & winner, Warrior & loser){
        while(loser.weaponNum>0 && winner.weaponNum<10)
            if(loser.weapon[0].ctg!=arrow){
                Weapon w=loser.weapon[0];
                winner.weapon.push_back(w);
                winner.weaponNum++;
                winner.AllWeaponNum++;
                winner.DWeaponNum[w.ctg]++;
                loser.weapon.erase(loser.weapon.begin());
                loser.weaponNum--;
            }
            else break;
        while (loser.weaponNum>0 && winner.weaponNum < 10) {
                Weapon w=loser.weapon[loser.weaponNum-1];
                winner.weapon.push_back(w);
                winner.weaponNum++;
                winner.AllWeaponNum++;
                winner.DWeaponNum[arrow]++;
                loser.weapon.erase(loser.weapon.begin()+loser.weaponNum-1);
                loser.weaponNum--;
            }
}
inline void City::Fighting() {
    if (RedWarrior == -1 || BlueWarrior == -1) {
        return;
    }
    Warrior & r=army[red][RedWarrior];
    Warrior & b=army[blue][BlueWarrior];
    bool sidetomove=CityNo%2==1?red:blue;
    int RCurrentWeapon=0,BCurrentWeapon=0;
    int EndState,i;
    while(1){
        int bIniHp=b.wHp,rIniHp=r.wHp;
        if(b.wHp<=0 && r.wHp>0){
            EndState=redwin;//red wins
            break;
        }
        if(r.wHp<=0 && b.wHp>0){
            EndState=bluewin;//red wins
            break;
        }  
        if(r.wHp<=0 && b.wHp<=0){
            EndState=bothdead;
            break;
        }  
        if(r.weaponNum==0 && b.weaponNum==0){
            EndState=bothalive;
            break;
        }
        if(sidetomove==red){
            if(r.weaponNum==0) {
                sidetomove=blue;
                continue;
            }
            int Hurt=r.UseWeapon(RCurrentWeapon);
            b.wHp-=Hurt;
            switch (r.weapon[RCurrentWeapon].ctg){
                case sword:
                    while(1){
                        RCurrentWeapon++;
                        if(RCurrentWeapon==r.AllWeaponNum) RCurrentWeapon=0;
                        if(!r.weapon[RCurrentWeapon].Broken) break;
                    }
                    break;
                case bomb:
                    if(r.wType!=ninja) r.wHp-=Hurt/2;
                    r.weapon[RCurrentWeapon].Broken=1;
                    r.DWeaponNum[bomb]--;
                    r.weaponNum--;
                    if(r.weaponNum==0) break;
                    while(1){
                        RCurrentWeapon++;
                        if(RCurrentWeapon==r.AllWeaponNum) RCurrentWeapon=0;
                        if(!r.weapon[RCurrentWeapon].Broken) break;
                    }
                    break;
                case arrow:
                    r.weapon[RCurrentWeapon].ArrowLife--;
                    if(r.weapon[RCurrentWeapon].ArrowLife==0) {
                        r.weapon[RCurrentWeapon].Broken=1;
                        r.DWeaponNum[arrow]--;
                        r.weaponNum--;
                    }
                    if(r.weaponNum==0) break;
                    while(1){
                        RCurrentWeapon++;
                        if(RCurrentWeapon==r.AllWeaponNum) RCurrentWeapon=0;
                        if(!r.weapon[RCurrentWeapon].Broken) break;
                    }
                    break;
            }
        }
        else{
            if(b.weaponNum==0) {
                sidetomove=red;
                continue;
            }
            int Hurt=b.UseWeapon(BCurrentWeapon);
            r.wHp-=Hurt;
            switch (b.weapon[BCurrentWeapon].ctg){
                case sword:
                    while(1){
                        BCurrentWeapon++;
                        if(BCurrentWeapon==b.AllWeaponNum) BCurrentWeapon=0;
                        if(!b.weapon[BCurrentWeapon].Broken) break;
                        }
                    break;
                case bomb:
                    if(b.wType!=ninja) b.wHp-=Hurt/2;
                    b.weapon[BCurrentWeapon].Broken=1;
                    b.DWeaponNum[bomb]--;
                    b.weaponNum--;
                    if(b.weaponNum==0) break;
                    while(1){
                        BCurrentWeapon++;
                        if(BCurrentWeapon==b.AllWeaponNum) BCurrentWeapon=0;
                        if(!b.weapon[BCurrentWeapon].Broken) break;
                    }
                    break;
                case arrow:
                    b.weapon[BCurrentWeapon].ArrowLife--;
                    if(b.weapon[BCurrentWeapon].ArrowLife==0) {
                        b.weapon[BCurrentWeapon].Broken=1;
                        b.DWeaponNum[arrow]--;
                        b.weaponNum--;
                    }
                    if(b.weaponNum==0) break;
                    while(1){
                        BCurrentWeapon++;
                        if(BCurrentWeapon==b.AllWeaponNum) BCurrentWeapon=0;
                        if(!b.weapon[BCurrentWeapon].Broken) break;
                    }
                    break;
            }
        }
        if(bIniHp==b.wHp && rIniHp==r.wHp && b.weaponNum==b.DWeaponNum[sword] && r.weaponNum==r.DWeaponNum[sword]){
            EndState=bothalive;
            break;
        }
        sidetomove=1-sidetomove;
    }
    switch(EndState){
        case redwin:
            TimeOp(40);
            printf("red %s %d killed blue %s %d in city %d remaining %d elements\n",
                wName[r.wType].c_str(),r.wNo,wName[b.wType].c_str(),b.wNo,CityNo,r.wHp);
            //weapon dealing
            sort(r.weapon.begin(),r.weapon.end());
            sort(b.weapon.begin(),b.weapon.end());
            for(i=r.AllWeaponNum-1;i>=0;i--)
                if(r.weapon[i].Broken) 
                    r.weapon.erase(r.weapon.end()-1);
                else break;    
            r.AllWeaponNum=r.weaponNum;        
            for(i=b.AllWeaponNum-1;i>=0;i--)
                if(b.weapon[i].Broken) 
                    b.weapon.erase(b.weapon.end()-1);
                else break;
            b.AllWeaponNum=b.weaponNum;
            TakeWeapon(r,b);  
            sort(r.weapon.begin(),r.weapon.end());
            for(i=r.AllWeaponNum-1;i>=0;i--)
                if(r.weapon[i].Broken) 
                    r.weapon.erase(r.weapon.end()-1);
                else break;          
            r.AllWeaponNum=r.weaponNum;
            //blueWarrior died
            BHeadQt.hqWSize[b.wType]--;
            BHeadQt.WSize--;
            army[blue][BlueWarrior].death=1;
            BlueWarrior=-1;
            //dragon yelled
            if(r.wType==dragon){
                TimeOp(40);
                printf("red dragon %d yelled in city %d\n",r.wNo,CityNo);
            }
            break;
        case bluewin:
            TimeOp(40);
            printf("blue %s %d killed red %s %d in city %d remaining %d elements\n",
                wName[b.wType].c_str(),b.wNo,wName[r.wType].c_str(),r.wNo,CityNo,b.wHp);
            //weapon dealing
            sort(b.weapon.begin(),b.weapon.end());
            sort(r.weapon.begin(),r.weapon.end());
            for(i=b.AllWeaponNum-1;i>=0;i--)
                if(b.weapon[i].Broken) 
                    b.weapon.erase(b.weapon.end()-1);
                else break;
            b.AllWeaponNum=b.weaponNum; 
            for(i=r.AllWeaponNum-1;i>=0;i--)
                if(r.weapon[i].Broken) 
                    r.weapon.erase(r.weapon.end()-1);
                else break;    
            r.AllWeaponNum=r.weaponNum;        
            TakeWeapon(b,r);
            sort(b.weapon.begin(),b.weapon.end());
            for(i=b.AllWeaponNum-1;i>=0;i--)
                if(b.weapon[i].Broken) 
                    b.weapon.erase(b.weapon.end()-1);
                else break;
            b.AllWeaponNum=b.weaponNum; 
            //redWarrior died
            RHeadQt.hqWSize[r.wType]--;
            RHeadQt.WSize--;
            army[red][RedWarrior].death=1;
            RedWarrior=-1;
            //dragon yelled
            if(b.wType==dragon){
                TimeOp(40);
                printf("blue dragon %d yelled in city %d\n",b.wNo,CityNo);
            }
            break;
        case bothdead:
            TimeOp(40);
            printf("both red %s %d and blue %s %d died in city %d\n",
                wName[r.wType].c_str(),r.wNo,wName[b.wType].c_str(),b.wNo,CityNo);
            BHeadQt.hqWSize[b.wType]--;
            BHeadQt.WSize--;
            army[blue][BlueWarrior].death=1;
            BlueWarrior=-1;

            RHeadQt.hqWSize[r.wType]--;
            RHeadQt.WSize--;
            army[red][RedWarrior].death=1;
            RedWarrior=-1;
            break;
        case bothalive:
            TimeOp(40);
            printf("both red %s %d and blue %s %d were alive in city %d\n",
                wName[r.wType].c_str(),r.wNo,wName[b.wType].c_str(),b.wNo,CityNo);
            if(r.wType==dragon){
                TimeOp(40);
                printf("red dragon %d yelled in city %d\n",r.wNo,CityNo);
            }
            if(b.wType==dragon){
                TimeOp(40);
                printf("blue dragon %d yelled in city %d\n",b.wNo,CityNo);
            }
            //weapon dealing
            sort(r.weapon.begin(),r.weapon.end());
            for(i=r.AllWeaponNum-1;i>=0;i--)
                if(r.weapon[i].Broken) 
                    r.weapon.erase(r.weapon.end()-1);
                else break;
            r.AllWeaponNum=r.weaponNum;
            sort(b.weapon.begin(),b.weapon.end());
            for(i=b.AllWeaponNum-1;i>=0;i--)
                if(b.weapon[i].Broken) 
                    b.weapon.erase(b.weapon.end()-1);
                else break;
            b.AllWeaponNum=b.weaponNum;            
            break;
    }
}
inline void City::WeaponReport() {
    if (RedWarrior != -1)
        army[red][RedWarrior].WeaponReport();
    if (BlueWarrior != -1)
        army[blue][BlueWarrior].WeaponReport();
}
void Warrior::MarchReport() {
    if (Position>0 && Position<=CityNum) {
        TimeOp(10);
        printf("%s %s %d marched to city %d with %d elements and force %d\n",
            colorName[wColor].c_str(), wName[wType].c_str(), wNo, Position, wHp, wForce);
    }
    else {
        TimeOp(10);
        printf("%s %s %d reached %s headquarter with %d elements and force %d\n",
            colorName[wColor].c_str(), wName[wType].c_str(), wNo, colorName[1 - wColor].c_str(), wHp, wForce);
        TimeOp(10);
        printf("%s headquarter was taken\n", colorName[1 - wColor].c_str());
        EndGame = 1;
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
        cin >> m >> CityNum >> LoyaltyLoss >> StopTime;

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
        bool r1 = 1, b1 = 1;

        while (1) {
            //00: new warriors are created
            if (TimeOut(0)) break;
            if (r1)
                r1 = RHeadQt.createWarrior();
            if (b1)
                b1 = BHeadQt.createWarrior();

            //05: lions run away
            if (TimeOut(5)) break;
            for (i = 0; i <= CityNum+1; i++)
                city[i].LionRunAway();

            //10: warriors match on
            if (TimeOut(10)) break;
            RHeadQt.March();
            BHeadQt.March();
            RHeadQt.HeadQtTaken();
            for (i = 1; i <= CityNum; i++) {
                city[i].MarchReport();
            }
            BHeadQt.HeadQtTaken();

            //35: wolves take the weapons
            if (TimeOut(35)) break;
            for (i = 1; i <= CityNum; i++)
                city[i].WolfTakeWeapons();

            //40: fighting
            if (TimeOut(40)) break;
            for (i = 1; i <= CityNum; i++)
                city[i].Fighting();

            //50: Headquaters report the number of elements
            if (TimeOut(50)) break;
            RHeadQt.ElementReport();
            BHeadQt.ElementReport();

            //55: warriors report about the weapons
            if (TimeOut(55)) break;
            for (i = 1; i <= CityNum; i++)
                city[i].WeaponReport();
            hour++;
        }
    }
    return 0;
}