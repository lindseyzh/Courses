/* 12.5-3
 * ref: https://www.bbsmax.com/A/rV57YVlqzP/
 * Note: There are many solutions based on linked list
 */
#include<bits/stdc++.h>
using namespace std;
map<int,int> mi;
int main(){
    int n;
    cin>>n;
    while(n--){
        mi.clear();
        int a,b;

        //This is wrong. That's crazy...
        /*
        while(cin>>a>>b){
            if(b<0) break;
            mi[b]=a;
        } */ 
        while(cin>>a>>b){
            if(b<0) break;
            if(mi.count(b))
                mi[b]+=a;
            else mi[b]=a;
        }    
        
        while(cin>>a>>b){
            if(b<0) break;
            if(mi.count(b))
                mi[b]+=a;
            else mi[b]=a;
        }     

        //map is sorted in STL

        bool fir=1;
        map<int,int>::reverse_iterator it=mi.rbegin();
        for(;it!=mi.rend();it++){
            if(it->second!=0){
                if(fir){
                    fir=0;
                    printf("[ %d %d ]",it->second,it->first); 
                }
                else printf(" [ %d %d ]",it->second,it->first); 
            }
        }
        if(fir==0) printf("\n");
        //printf("\n"); //OK as well
    }

    return 0;
}