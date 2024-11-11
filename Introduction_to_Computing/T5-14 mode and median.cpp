#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	string s;
    int i,j;
    getline(cin,s);
    while (getline(cin,s)){
    	int a[500]{0};
        int tim[150]{0};
        int n=count(s.begin(),s.end(),',')+1;
        int p=0;
        sscanf(s.c_str(),"%d",&a[0]);
        tim[a[0]]++;
        for(i=1;i<n;i++){
            p=s.find_first_of(',');
            s.erase(s.begin(),s.begin()+p+1);
//          printf("%s\n",s.c_str());//for check
			sscanf(s.c_str(),"%d",&a[i]);
            tim[a[i]]++;	
        }
        int tmax=1,firtmax=1,firp;
        bool tmexist=0;
        for(i=0;i<150;i++)
            if (tim[i]>tmax) {
                tmax=tim[i];
                firtmax=i;
            }
		for(j=0;j<n;j++)
			if (a[j]==firtmax){
				firp=j;
				break;
			}
		
        for(i=0;i<150;i++)
            if (tim[i]==tmax){
            	for(j=0;j<n;j++){
            		if (a[j]==i&&firp>j) {
						firp=j;
						firtmax=i;
						break;
					}
         		}
			}
        for (i=0;i<n;i++)
        	if(a[i]!=a[0]) {
        		tmexist=1;
        		break;
			}
        if(tmexist) printf("mode=%d,",firtmax);
            else printf("mode=NO,");
        for(i=0;i<n-2;i++)
            for(j=0;j<n-i-1;j++){
                if (a[j]>a[j+1]) swap(a[j],a[j+1]);
            }
        if (n%2==0) 
            	printf("median=(%d+%d)/2\n",a[n/2-1],a[n/2]);
            else printf("median=%d\n",a[(n-1)/2]);
    }
    return 0;
}
