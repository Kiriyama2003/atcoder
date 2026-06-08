#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    //dp[i][j]: i桁目がjであるようなN桁の平坦数の個数
    vector<vector<ll>> dp(1000001,vector<ll>(10));

    // 初期条件: 1桁目が1~9の場合
    for(int i=1;i<=9;i++) dp[1][i] = 1;

    // DPテーブルの計算
    for(int i=2;i<=n;i++) {
        for(int j=1;j<=9;j++) {
            dp[i][j] = dp[i-1][j];  // jが変わらない場合
            if (2<=j){
                dp[i][j] += dp[i-1][j-1];  // jが1減る場合
                dp[i][j] %= 998244353;
            }
            if (j<=8) {
                dp[i][j] += dp[i-1][j+1];  // jが1増える場合
                dp[i][j] %= 998244353;
            }
        }
    }

    // N桁目が1~9の全てのケースを合計
    ll res=0;
    for (int i=1;i<=9;i++){
        res += dp[n][i];
        res %= 998244353;
    }

    cout<<res%998244353<<endl;
    return 0;
}
