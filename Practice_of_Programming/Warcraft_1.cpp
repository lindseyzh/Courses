#include<iostream>
#include<vector>
#include<string>
using namespace std;
int iniHp[5]{0};
int hour = 0;
string wName[]={"dragon", "ninja", "iceman", "lion", "wolf"};
string colorName[] = {"red", "blue"};
int seq[2][5]={{2, 3, 4, 1, 0}, {3, 0, 1, 2, 4}};
void TimeOp(){
    if (hour < 10) cout << "00" << hour << ' ';
    else if (hour < 100) cout << 0 << hour << ' ';
    else cout << hour << ' ';
}
class Warrior{
    public:
        int wType;
        int wNo;//number
        int wHp;//health point
        Warrior(int ty, int no, int hp):wType(ty), wNo(no), wHp(hp){};
};
class HeadQt{
    public:
        bool color;
        int hqLife;
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
            Warrior w(ty, WNum + 1, iniHp[ty]);
            army.push_back(w);
            hqLife -= iniHp[ty];
            hqWSize[ty] ++;
            WNum ++;
            WSize ++;
            nxWarrior ++;
            nxWarrior %= 5;

            //output
            TimeOp();
            cout << colorName[color] << ' ';
            cout << wName[ty] << ' ' << w.wNo <<" born with strength " << w.wHp << ",";
            cout << hqWSize[ty] << ' ' << wName[ty] << " in " << colorName[color] << " headquarter" << endl;
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
        HeadQt RHeadQt(m, 0), BHeadQt(m, 1);
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