#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;
const int MAX = 110; 
class CHugeInt {
// 在此处补充你的代码
    public:
        int hi[202]{0};
        int l=0;
        CHugeInt(){
            memset(hi,0,202*sizeof(int));
            l=0;
        }
        CHugeInt(const int & nn){
            int n=nn,i=0;
            while(n>0){
                hi[i]=n%10;
                n/=10;
                i++;
            }
            l=i;
        }
        CHugeInt(const char* s){
            l=strlen(s);
            for(int i=0;i<l;i++)
                hi[l-1-i]=s[i]-'0';
        }
        CHugeInt operator+(const CHugeInt & h){
            int len=max(l,h.l);
            for(int i=0;i<len;i++){
                hi[i] = hi[i]+h.hi[i];
                if(hi[i]>=10){
                    hi[i]-=10;
                    hi[i+1]+=1;
                }
            }
            if(hi[len]>0) len++;
            l=len;
            return *this;
        }
        CHugeInt & operator+(const int a){
/*            int n=a,i=0;
            while(n>0){
                hi[i]+= n%10;
                n/=10;
                if(hi[i]>=10){
                    hi[i]-=10;
                    hi[i+1]+=1;
                }
                i++;
            }
            while(hi[l]>0) l++;
*/
            return *this;
        }
        friend CHugeInt & operator+(const int a, CHugeInt & s){
/*
            int n=a,i=0;
            while(n>0){
                s.hi[i]+= n%10;
                n/=10;
                if(s.hi[i]>=10){
                    s.hi[i]-=10;
                    s.hi[i+1]+=1;
                }
                i++;
            }
            while(s.hi[s.l]>0) s.l++;
*/
            return s;
        }
        CHugeInt & operator+=(const int a){
            int n=a,i=0;
            while(n>0){
                hi[i]+= n%10;
                n/=10;
                if(hi[i]>=10){
                    hi[i]-=10;
                    hi[i+1]+=1;
                }
                i++;
            }
            while(hi[l]>0) l++;
            return *this;
        }
        CHugeInt & operator++(){
            hi[0]++;
            int i=0;
            while(hi[i]>=10){
                hi[i]-=10;
                hi[i+1]++;
                i++;
            }
            if(i>=l) l=i+1;
            return *this;
        }
        CHugeInt operator++(int p){
            CHugeInt s=*this;
            hi[0]++;
            int i=0;
            while(hi[i]>=10){
                hi[i]-=10;
                hi[i+1]++;
                i++;
            }
            if(i>=l) l=i+1;
            return s;
        }
        friend ostream& operator<<(ostream & op,const CHugeInt & h){
            for(int i=h.l-1;i>=0;i--)
                op << h.hi[i];
            return op;
        }
};
int  main() 
{ 
	char s[210];
	int n;

	while (cin >> s >> n) {
		CHugeInt a(s);
		CHugeInt b(n);

		cout << a + b << endl;
		cout << n + a << endl;
		cout << a + n << endl;
		b += n;
		cout << ++ b << endl;
		cout << b++ << endl;
		cout << b << endl;
	}
	return 0;
}