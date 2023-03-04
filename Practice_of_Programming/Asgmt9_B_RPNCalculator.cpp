#include<iostream>
#include<stack>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;
vector<double> memo;
int memoSize;
stack<double> cal;
int main(){
	cin>>memoSize;
	double a,b;
	for(int i=0;i<memoSize;i++){
		cin>>a;
		memo.push_back(a);
	}	
	sort(memo.begin(),memo.end());
	string ope;
	while(cin>>ope){
		if(ope=="="){
			memo[0]=cal.top();
			printf("%e\n",memo[0]);
			sort(memo.begin(),memo.end());
			while(!cal.empty()) cal.pop();
		}
		else if(ope=="+"){
			a=cal.top();
			cal.pop();
			b=cal.top();
			cal.pop();
			cal.push(a+b);
		}
		else if(ope=="-"){
			a=cal.top();
			cal.pop();
			b=cal.top();
			cal.pop();
			cal.push(b-a);			
		}
		else if(ope=="*"){
			a=cal.top();
			cal.pop();
			b=cal.top();
			cal.pop();
			cal.push(b*a);			
		}		
		else if(ope=="/"){
			a=cal.top();
			cal.pop();
			b=cal.top();
			cal.pop();
			cal.push(b/a);			
		}
		else if(ope=="^"){
			a=cal.top();
			cal.pop();
			b=cal.top();
			cal.pop();
			cal.push(pow(b,a));			
		}
		else{
			a=atof(ope.c_str());
			cal.push(a);
		}
	}
    int num=0;
	printf("\n%e",memo[0]);
    num++;
	for(int i=1;i<memoSize;i++){
        if(num!=0) cout<<' ';
		printf("%e",memo[i]);
        num++;
        if(num==10){
            cout<<endl;
            num=0;
        }
    }
    if(num!=0) printf("\n");
	return 0;
}