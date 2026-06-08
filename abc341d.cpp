#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//ll lcm(ll x,ll y){return (x*y) / __gcd(x, y) ;}   //最小公倍数
using mint = modint998244353;
int main(void){
	ll n,m,k;   cin>>n>>m>>k;
    ll l=lcm(n,m);

    auto f=[&](ll x){
        ll c= x/n + x/m -(x/l)*2;
        return c>=k;
    };
    ll wa=0,ac=1e18;
    while(wa+1 != ac){
        ll wj=(wa+ac)/2;
        if(f(wj)) ac=wj;
        else wa=wj;
    }
    cout<<ac<<endl;

	return 0;
}
