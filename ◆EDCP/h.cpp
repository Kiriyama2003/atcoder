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
const int MOD=1000000007;
void add(int &a,int b){
    a+=b;
    if(a>=MOD) a-=MOD;
}

int main(){
    int h,w;    cin>>h>>w;
    vector<vector<int>> dp(h,vector<int>(w));
    vector<string> s(h);
    rep(i,h) cin>>s[i];
    dp[0][0]=1;

    rep(i,h){
        rep(j,w){

            //下に行けるなら
            if(i <=h-2 && s[i+1][j]=='.') add(dp[i+1][j],dp[i][j]);
            //右に行けるなら
            if(j <=w-2 && s[i][j+1]=='.') add(dp[i][j+1],dp[i][j]);
        }
    }
    //for(auto v:dp) {
    //    for(auto vv:v) cout<<vv<<" "; 
    //    cout<<"\n";
    //} 

    std::cout<<dp[h-1][w-1]<<endl;
    return 0;
}