#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
int main(){
    ll l,r; cin>>l>>r;
    ll ans=0;
    for(ll i=l;i<r&&i<=l+1500;i++){
        for(ll j=r;j>i&&j>=r-1500;j--){
            if(__gcd(i,j)==1) ans=max(ans,j-i);
        }
    }
    cout<<ans<<endl;
    return 0;
}
