#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//S067:鉱物の硬さ
//https://paiza.jp/challenges/share/YREJ2vxiQ9oGvMQ5dRUTzGqcQaIZ0593DId-NiUvFik
vector<bool> visited;
vector<int> foot;
vector<vector<int>> g;
int n,m;
void dfs(int now){
    visited[now]=true;
    foot.push_back(now);

    //条件終了なら
    if((int)foot.size() == n){
        rep(ff,n) {
            if(ff!=(n-1)) cout<<foot[ff]+1<<" ";
            else cout<<foot[ff]+1;
        }
        exit(0);
    }

    for(int neww:g[now]){
        if(!visited[neww]) dfs(neww);
    }
    visited[now]=false;
    foot.pop_back();
}
int main(){
    cin>>n>>m;
    visited.assign(n,false);
    g.assign(n,vector<int>());
    vector<int> cnt(n,0);

    rep(i,m){
        int a,b;    cin>>a>>b;  a--,b--;
        g[a].push_back(b);
        cnt[b]++;
    }
    int ccnt=0;
    rep(i,n) if(cnt[i]==0) ccnt++;
    if(!(ccnt == 1)){ cout<<"-1";  return 0;}

    rep(i,n){
        if(cnt[i]==0){
            visited.assign(n,false);
            foot.clear();
            dfs(i);
        }
    }
    cout<<"-1"<<endl;
    return 0;
}