#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<vector<int>> A(n,vector<int>(n));
    rep(i,n) rep(j,n) cin>>A[i][j];

    int m;  cin>>m;
    vector<vector<bool>> g(n,vector<bool>(n,true));
    rep(i,m){
        int a,b;    cin>>a>>b;  --a,--b;
        g[a][b]=false,g[b][a]=false;
    }

    vector<vector<int>> ver(n);
    rep(i,n){
        for(int j=0;j<n;j++) if(g[i][j]==true) ver[i].push_back(j);
    }

    vector<bool> visited(n,false);
    int ans=INT_MAX;

    auto dfs=[&](int u,int cnt,int cost,auto& self){
        if(cnt == n-1){
            ans = min(ans,cost);
            return;
        }
        for(int v:ver[u]){
            if(!visited[v]){
                visited[v]=true;
                self(v,cnt+1,cost+A[v][cnt+1],self);
                visited[v]=false;
            }
        }
    };



    rep(i,n){
        //頂点iから, 遷移回数は0回, コストは0
        visited[i]=true;
        dfs(i,0,A[i][0],dfs);
        visited[i]=false;
    }


    if(ans==INT_MAX) cout<<-1<<'\n';
    else cout<<ans<<'\n';
    
    return 0;  
}