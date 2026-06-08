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
    
    vector<vector<int>> dp(n+1,vector<int>(9));

    rep(i,n+1) dp[i][0] = 1;

    const int mod = 1000000007;
    string t = "chokudai";

    //もらうdp
    rep(i,n) rep(j,8) {
        if(s[i] != t[j]) {
            dp[i+1][j+1] = dp[i][j+1];
        }else {
            dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
        }
    }


    //配るdp
    rep(i,n) rep(j,9) {
        //0 ~ i ~ n-1  0~n
        //0 ~ j ~ 8 0~8
        //右へ配る
        (dp[i+1][j] += dp[i][j]) %= mod;

        //右下へ配る
        // j<9  j==8の時, t[8]これが配列外参照する
        if(j < 9 && s[i] == t[j]) {
            (dp[i+1][j+1] += dp[i][j]) %= mod;
        }
    }
    cout << dp[n][8] << endl;




    cout<<dp[n][8]<<endl;

    return 0;
}
