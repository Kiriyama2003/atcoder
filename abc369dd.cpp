#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;

    const ll INF=1e18;
    //vector<vector<ll>> dp(n+1,vector<ll>(2,-INF));

    ll dp0=0;       //偶数回攻撃が終わった時
    ll dp1=-INF;    //奇数回攻撃が終わった時
    rep(i,n){
        ll x;   cin>>x;
        ll tmp=dp0;

        dp0=max(dp1+2*x , dp0);
        dp1=max(tmp+x, dp1);
    }
    cout<<max(dp0,dp1)<<endl;

    return 0;
}