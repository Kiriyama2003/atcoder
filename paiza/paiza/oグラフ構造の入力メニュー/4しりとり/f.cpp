#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<pair<int,int>> g(n+1);
    
    rep(i,m){
        int a,b;    cin>>a>>b;
        g[b].first++;
        g[a].second++;
    }
    for(int i=1;i<=n;i++){
        cout<<g[i].first<<(i!=n?" ":"");
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        cout<<g[i].second<<(i!=n?" ":"");
    }
    

    return 0;
}