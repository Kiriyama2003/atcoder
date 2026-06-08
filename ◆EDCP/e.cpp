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
    ll n,w;  cin>>n>>w;

    vector<ll> W(n),V(n);
    rep(i,n) cin>>W[i]>>V[i];

    vector<vector<ll>> dp(n+1,vector<ll>(100010,INF));
    dp[0][0]=0; //品物0個目までみて, 価値0のときの, 重さ


    //i番目の荷物について
    for(int i=1;i<=n;i++){
        //価値がjの時
        for(int j=0;j<=100010;j++){
            dp[i][j] = dp[i-1][j];        //選択しない
            if(0<= j-V[i-1]) 
                dp[i][j] = min( dp[i][j] , dp[i-1][j-V[i-1]] + W[i-1] );
        }
    }

    //for(auto v:dp) {for(auto vv:v) std::cout<<vv<<" ";} std::cout<<endl;
    //rep(i,w) rep(j,n) {std::cout<<dp[i][j]<<" ";} std::cout<<endl;

    
    for(ll i=100000;i>=0;i--){
        if(dp[n][i] <= w){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}