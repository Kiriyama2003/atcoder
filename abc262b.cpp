#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;    cin>>n>>m;
    vector<vector<bool>> adj(n,vector<bool>(n));
    rep(i,m){
        int u,v;    cin>>u>>v;
        u--;    v--;
        adj[u][v]=adj[v][u]=true;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(adj[i][j] && adj[j][k] && adj[k][i]){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}