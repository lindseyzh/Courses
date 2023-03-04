#include<iostream>
 #include<string>
 #include<cstring>
 #include<cstdlib>
 #include<queue>
 using namespace std;
 char a[6] = "12345";
 bool vis[100000][4][3];
 int ans[100000];
 struct node{
     string a;
     int op2, op3, step;
     node(string aa, int o2, int o3, int ss = 0):a(aa),op2(o2),op3(o3), step(ss){};
 };
 queue<node>q;
 int main(){
     memset(vis, false, sizeof(vis));
     memset(ans, -1, sizeof(ans));
     q.push(node("12345",0,0));
     vis[12345][0][0] = true;
     ans[12345] = 0;
     while(!q.empty()){
         node no = q.front();
         q.pop();
         string temp = no.a;
         if(ans[int(atof(temp.c_str()))]==-1)ans[int(atof(temp.c_str()))] = no.step;
     //    cout<<no.a<<endl;
         //第一种操作 
         for(int i = 0; i < 4; i++){
             swap(temp[i], temp[i+1]);
             if(!vis[int(atof(temp.c_str()))][no.op2][no.op3]){
                 vis[int(atof(temp.c_str()))][no.op2][no.op3] = true;
                 q.push(node(temp, no.op2, no.op3, no.step+1));
             }
             swap(temp[i], temp[i+1]);
         }
         //第二种操作 
         if(no.op2<3){
             for(int i = 0; i < 5; i++){
                 temp = no.a;
                 int num = temp[i] - '0';
                 num++; 
                 if(num==10) num = 0;
                 temp[i] = '0'+num;
                 if(!vis[int(atof(temp.c_str()))][no.op2+1][no.op3]){
                     vis[int(atof(temp.c_str()))][no.op2+1][no.op3] = true;
                     q.push(node(temp, no.op2+1, no.op3, no.step+1));
                 }
             }
         } 
 
         //第三种操作 
         if(no.op3<2){
             for(int i = 0; i < 5; i++){
                 temp = no.a;
                 int num = temp[i] - '0';
                 num*=2; 
                 if(num>9) num %= 10;
                 temp[i] = '0'+num;
                 if(!vis[int(atof(temp.c_str()))][no.op2][no.op3+1]){
                     vis[int(atof(temp.c_str()))][no.op2][no.op3+1] = true;
                     q.push(node(temp, no.op2, no.op3+1, no.step+1));
                 }
             }
         }
     }
     while(cin>>a){
         cout<<ans[int(atof(a))]<<endl;
     }
     return 0; 
 }