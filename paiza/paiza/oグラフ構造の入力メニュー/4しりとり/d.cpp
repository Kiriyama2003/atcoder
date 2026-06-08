#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    //vector<vector<int>> s(n+1,vector<int>(n+1));
    vector<int> g(n+1);
    rep(i,m){
        int a,b;    cin>>a>>b;
        if(a==b) g[a]+=2;
        else {g[a]++; g[b]++;}
    }
    
    int odd=0;
    for(int i=1;i<=n;i++) {
        if(g[i]%2 != 0) odd++;
    }
    if(odd==0 || odd==2) cout<<1;
    else    cout<<0;

    

    return 0;
}