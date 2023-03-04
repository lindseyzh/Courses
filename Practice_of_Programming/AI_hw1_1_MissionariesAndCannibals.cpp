//solution 1:search
//https://blog.csdn.net/GavinLinxs/article/details/104724908?spm=1001.2101.3001.6650.12&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-12.pc_relevant_paycolumn_v3&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7ECTRLIST%7ERate-12.pc_relevant_paycolumn_v3&utm_relevant_index=16

#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int n,m;
struct state{
    int c,m;
    bool boat;
    int steps;
};
queue<state> q;
bool closed[1010][1010][2]{0};
int bfs(state s){
    if(s.m==0&&s.c==0)//success
        return s.steps;
    if(closed[s.m][s.c][s.boat])//searched
        return -1;
    closed[s.m][s.c][s.boat] = 1;

    if(!s.boat){//left->right
        for(int i=n;i>0;i--){//priority given to full load
            if(i>s.c+s.m) continue;
            for(int j=i;j>=0;j--){
                if(j>s.c || i-j>s.m) continue;
                if(i!=j && j>i-j) continue;
                if((s.m-(i-j)!=s.c-j) && (s.m-(i-j)!=m) && (s.m-(i-j)!=0)) continue;
                if(closed[s.m-(i-j)][s.c-j][1]) continue;
                if(s.m==(i-j) && s.c==j)
                    return s.steps+1;//success
                state next;
                next.c=s.c-j;
                next.m=s.m-(i-j);
                next.boat=1;
                next.steps=s.steps+1;
                q.push(next);
            }
        }

    }
    else{
        for(int i=1;i<=2;i++){//priority given to less load
            if(i>=m-s.c+m-s.m) continue;
            for(int j=i;j>=1;j--){//j cannibal(s) & i-j missionaries(at least 1)
                if(j>m-s.c || i-j>m-s.m) continue;
                if(j!=i&&j>i-j) continue;
                if((s.m+(i-j)!=s.c+j) && (s.m + (i-j)!=m)&& (s.m!=0)) continue;
                if(closed[s.m+(i-j)][s.c+j][0]) continue;
                state next;
                next.c=s.c+j;
                next.m=s.m+(i-j);
                next.boat=0;
                next.steps=s.steps+1;
                q.push(next);
            }
        }
    }
    return -1;
}
int main(){
    cin>>m>>n;
    //initialization
    state ini;
    ini.c=ini.m=m;
    ini.boat=0;
    ini.steps=0;
    q.push(ini);
    int ans=-1;
    state s;
    memset(closed, 0 ,sizeof(closed));
    while(!q.empty()){
        s = q.front();
        q.pop();
        ans = bfs(s);
        if(ans != -1) break;
    }
    cout << ans <<endl;
    return 0;
}

/*
solution 2: greedy algorithm(unfinished)
#include<iostream>
using namespace std;
int n;
int dfs(int m){
    if(n>=2*m) return 1;
    return dfs(m-n/2+1)+2;
}
int dfs2(int m){
    if(m>=2) return dfs2(m-1)+4;
    else return -1;
}
int main(){
    int m;
    cin >> m >> n;
    if(n==2||n==3) cout<< dfs2(m) << endl;
    else cout << dfs(m) << endl;
    return 0;
}
*/