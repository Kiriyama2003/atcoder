#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll a,b; cin>>a>>b;

    auto f = [&](ll n) -> double {
        return (double) a / sqrt(n + 1) + (double) b * n;
    };

    ll argmin = pow((double) a / (b * 2), 2./3.) - 1;


    ll l = max(argmin - 5, 0LL), r = min(argmin + 5, a / b);

    //n=0のとき、A/√(g=1) + Bより ans=A
    double ans = a;

    for(ll i = l; i <= r; i++) ans = min(ans, f(i));
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}