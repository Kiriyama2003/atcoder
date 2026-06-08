#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n,k;  cin>>n>>k;
    //kになる, 連続部分列の個数
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    vector<ll> s(n+1);  s[0]=0;
    rep(i,n) s[i+1]=s[i]+a[i];

    map<ll,ll> mp;
    ll ans=0;

    for(int i=0;i<=n;i++){
        ans += mp[s[i]];
        mp[s[i]+k]++;
    }
    cout<<ans<<endl;
    return 0;
}