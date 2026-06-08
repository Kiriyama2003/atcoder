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
        g[b].first++;   g[a].second++;
    }
    
    bool check=true;
    for(int i=1;i<=n;i++){
        if(g[i].first != g[i].second){check=false;}
    }
    if(check){cout<<1; return 0;}


    int check1=0,check2=0;
    for(int i=1;i<=n;i++){
        if(g[i].first == g[i].second) continue;
        else if(g[i].first+1 == g[i].second) check1++;
        else if(g[i].first == g[i].second+1) check2++;
        else {cout<<0; return 0;}
    }
    if((check1 == 1) && (check2 == 1)) cout<<1;
    else cout<<0;
    

    

    return 0;
}