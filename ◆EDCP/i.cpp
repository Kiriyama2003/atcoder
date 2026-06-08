#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
const long long INF = 1LL<<60;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
int main(){
    int n;  cin>>n;
    vector<double> p(n);
    rep(i,n) cin>>p[i];

    vector<vector<double>> dp(3100,vector<double>(3100));
    dp[0][0]=1.0;   //最初のi枚のコインを投げたとき, 表がj枚となる確率

    rep(i,n){
        for(int j=0;j<=i;j++){
            //i枚投げて, j枚表が出ている状況で, 1枚投げ, 表が出たとき
            dp[i+1][j+1]+=dp[i][j]*p[i];

            //1枚投げ, 裏が出て時
            dp[i+1][j]+=dp[i][j]*(1-p[i]);
        }
    }

    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n+2;j++) cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    double res=0.0;
    for(int j=n/2 +1;j<=n;j++) res+=dp[n][j];
    cout<<fixed<<setprecision(10)<<res<<endl;

    return 0;
}