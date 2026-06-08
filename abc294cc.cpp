#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;

    vector<pair<ll,ll>> A(n),B(m),C(n+m);
    
    rep(i,n) cin>>A[i].first;
    rep(i,m) cin>>B[i].first;

    rep(i,n) A[i].second=i;
    rep(i,m) B[i].second=i+n;

    merge(all(A),all(B),C.begin());
    

    vector<ll> ans(n+m);
    rep(i,n+m) ans[C[i].second]=i;

    rep(i,n) cout<<ans[i]+1<<" ";
    cout<<endl;
    rep(i,m) cout<<ans[i+n]+1<<" ";
    cout<<endl;

    return 0;
}