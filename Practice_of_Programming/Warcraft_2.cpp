#include<iostream>
#include<vector>
#include<string>
using namespace std;
int iniHp[5]{0};
int hour = 0;
string wName[]={"dragon", "ninja", "iceman", "lion", "wolf"};
enum warriortype {dragon=0,ninja,iceman,lion,wolf};
string colorName[] = {"red", "blue"};
string weaponName[]={"sword","bomb","arrow"};;
enum weapontype {sword=0,bomb,arrow};
enum colortype {red=0,blue=1};
int seq[2][5]={{2, 3, 4, 1, 0}, {3, 0, 1, 2, 4}};
void TimeOp(){
    if (hour < 10) cout << "00" << hour << ' ';
    else if (hour < 100) cout << 0 << hour << ' ';
    else cout << hour << ' ';
}
class Warrior{
    public:
        int wNo;//number
        int wHp;//health point
        Warrior(int no, const int & hp):wNo(no), wHp(hp){};
};
class Dragon:public Warrior{
    public:
        int weapon;
        float morale;
        Dragon(int no,float m):Warrior(no,iniHp[dragon]),morale(m){
            weapon=no%3;
            printf("It has a %s,and it's morale is %.2f\n",weaponName[weapon].c_str(),morale);
        };

};
class Ninja:public Warrior{
    public:
        int weapon1,weapon2;
        Ninja(int no):Warrior(no,iniHp[ninja]){
            weapon1=no%3;
            weapon2=(no+1)%3;
            printf("It has a %s and a %s\n",weaponName[weapon1].c_str(),weaponName[weapon2].c_str());
        };

};
class Iceman:public Warrior{
    public:
        int weapon;
        Iceman(int no):Warrior(no,iniHp[iceman]){
            weapon=no%3;
            printf("It has a %s\n",weaponName[weapon].c_str());
        };
};
class Lion:public Warrior{
    public:
        int loyalty;
        Lion(int no,int l):Warrior(no,iniHp[lion]),loyalty(l){
            printf("It's loyalty is %d\n",loyalty);
        };
};
class Wolf:public Warrior{
    public:
        Wolf(int no):Warrior(no,iniHp[wolf]){};
};
class HeadQt{
    public:
        int hqLife;
        bool color;
        int nxWarrior = 0;
        HeadQt(int l, bool c):hqLife(l), color(c){};
        int hqWSize[5]{0};
        int WNum = 0, WSize = 0;
        vector<Warrior> army;  
        bool createWarrior(){
            int ty = seq[color][nxWarrior];
            int iniNxWa = nxWarrior;
            while(hqLife < iniHp[ty]){
                nxWarrior ++;
                nxWarrior %= 5;
                if (nxWarrior == iniNxWa){
                    TimeOp();
                    cout << colorName[color] << " headquarter stops making warriors" << endl; 
                    return 0;
                }
                ty = seq[color][nxWarrior];
            }
            //create
            TimeOp();
            cout << colorName[color] << ' ';
            cout << wName[ty] << ' ' << WNum+1 <<" born with strength " << iniHp[ty] << ",";
            cout << hqWSize[ty]+1 << ' ' << wName[ty] << " in " << colorName[color] << " headquarter" << endl;

            switch(ty){
                case dragon:{
                    Dragon w1(WNum+1,1.0*(hqLife-iniHp[dragon])/iniHp[dragon]);
                    army.push_back(w1);
                    break;}
                case ninja:{
                    Ninja w2(WNum+1);
                    army.push_back(w2);
                    break;}
                case iceman:{
                    Iceman w3(WNum+1);
                    army.push_back(w3);
                    break;}
                case lion:{
                    Lion w4(WNum+1,hqLife-iniHp[lion]);
                    army.push_back(w4);
                    break;}
                case wolf:{
                    Wolf w5(WNum+1);
                    army.push_back(w5);
                    break;}
            }
            hqLife -= iniHp[ty];
            hqWSize[ty] ++;
            WNum ++;
            WSize ++;
            nxWarrior ++;
            nxWarrior %= 5;

            //output
/*
            TimeOp();
            cout << colorName[color] << ' ';
            cout << wName[ty] << ' ' << WNum <<" born with strength " << iniHp[ty] << ",";
            cout << hqWSize[ty] << ' ' << wName[ty] << " in " << colorName[color] << " headquarter" << endl;
*/
            return 1;
        }
};
int main(){
    int n, nn, i;
    cin >> n;
    for(nn = 1; nn <= n; nn++){
        cout << "Case:" << nn << endl;
        hour = 0;
        int m;
        cin >> m;
        HeadQt RHeadQt(m, red), BHeadQt(m, blue);
        for(i = 0; i < 5; i++)
            cin >> iniHp[i];
        bool r1 = 1, b1 = 1;
        while(1){
            if (r1)
                r1 = RHeadQt.createWarrior();
            if(b1) 
                b1 = BHeadQt.createWarrior();
            if (!r1 && !b1)
                break;
            hour ++;
        }
    }   
    return 0;
}