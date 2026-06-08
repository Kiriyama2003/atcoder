#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<vector<bool>> g(110,vector<bool>(110,false));
    rep(i,m){
        int a,b;    cin>>a>>b;
        g[a][b]=true;
    }

    REP(i,n){
        REP(j,n){
            if(g[i][j]) cout<<1<<(j!=n?" ":"");
            else cout<<0<<(j!=n?" ":"");
        }
        cout<<endl;
    }

    return 0;
}
