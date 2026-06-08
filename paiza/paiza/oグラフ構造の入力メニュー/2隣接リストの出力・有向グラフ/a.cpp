#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<vector<int>> g(n+1);
    rep(i,m){
        int a,b;    cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    REP(i,n){
        if(g[i].empty()) cout<<-1<<endl;
        else{
            sort(all(g[i]));
            for(int j=0;j<g[i].size();j++){
                cout<<g[i][j]<<(j!=g[i].size()-1?" ":"");
            }
            cout<<endl;
        }
    }

    return 0;
}