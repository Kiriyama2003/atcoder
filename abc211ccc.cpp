#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};


int main(){
    string s;   cin>>s;
    int n = s.size();
    
    vector<vector<int>> dp(9,vector<int>(n+1));

    dp[0][0] = 1;

    const int mod = 1000000007;
    string t = "chokudai";

    //もらうdp
    rep(i,9) rep(j,n){
        //0 ~ i ~ 8  chokudai文字列
            //(j+1) 1~9　　dpの2次元
        //0 ~ j ~ n-1  文字列s
            //(j+1) 1~n  dpの1次元
        
        //右へ配る
        (dp[i][(j+1)] += dp[i][j]) %= mod;

        if((i != 8) && s[j] == t[i]){
            //配り元[i][j]
            (dp[i+1][j+1] += dp[i][j]) %= mod;
        }
    }

    cout<<dp[8][n]<<endl;

    return 0;
}
