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
    string s,t; cin>>s>>t;

    vector<vector<int>> dp(3100,vector<int>(3100));
    dp[0][0]=0;
    rep(i,(int)s.size()){
        rep(j,(int)t.size()){
            if(s[i]==t[j]) dp[i+1][j+1]=dp[i][j]+1;
            dp[i+1][j+1] = max(dp[i+1][j+1],dp[i+1][j]);
            dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j+1]);
        }
    }
    //復元
    string res="";
    int i = s.size(), j = t.size();
    while(i>0 && j>0){
        if(dp[i][j]==dp[i-1][j]) i--;       //上と等しい
        else if(dp[i][j]==dp[i][j-1]) j--;  //左と等しい
        else{                               //左上と等しい
            res = s[i-1] + res;
            i--;    j--;
        }
    }
    cout<<res<<endl;
    return 0;
}