#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()


ll func(ll n,ll m){
    if(m==0) return n;
    return func(m,n%m);
}
int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll n,m; cin>>n>>m;
    cout<<func(n,m);
    return 0;
}