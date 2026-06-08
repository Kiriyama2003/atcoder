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
    //n個の品物, ナップサックの容量W
    //w[i]：品物iの重さ, V[i]：品物iの価値
    vector<ll> W(n),V(n);
    rep(i,n) cin>>W[i]>>V[i];

    vector<vector<ll>> dp(101,vector<ll>(100010,-INF));
    //dp[i][j] 品物iまでで, 重さjであるときの, 最大の価値
    dp[0][0]=0;


    //i番目の荷物について
    for(int i=1;i<=n;i++){
        //現在の重さ
        for(int j=0;j<=w;j++){
            dp[i][j] = dp[i-1][j];        //選択しない
            if(0<= j-W[i-1]) dp[i][j] 
                = max(dp[i][j] ,dp[i-1][j-W[i-1]]+V[i-1]);
        }    
    }

    //for(auto v:dp) {for(auto vv:v) std::cout<<vv<<" ";} std::cout<<endl;
    //rep(i,w) rep(j,n) {std::cout<<dp[i][j]<<" ";} std::cout<<endl;

    /*ll ans=0;
    for(auto v:dp[n]) ans=max(ans,v);
    cout<<ans<<endl;*/

    //これなら一行でいい
    cout<<*max_element(all(dp[n]))<<endl;
    return 0;
}