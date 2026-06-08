#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll n,m,d;  cin>>n>>m>>d;
    vector<ll> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];
    sort(all(b));

    ll ans=-1;
    rep(i,n){
        ll l=a[i]-d,r=a[i]+d;
        int j=upper_bound(all(b),r)-b.begin();
        //j==0　イテレータが一番左　±dの範囲に, bがないから
        if(j>0) {
            ll x=b[j-1];
            if(l<=x) ans=max(ans,x+a[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}