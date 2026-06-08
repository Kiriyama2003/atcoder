#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N;  cin>>N;
    vector<ll> A(N);
    rep(i,N) cin>>A[i];

    //dp[i][j]: i番目のモンスターまで見たときに、j回倒して得られる最大の経験値
    vector<vector<ll>> dp(N+10,vector<ll>(N+10,0));

    for (int i = 1; i <= N;++i) {
        //倒すのj回目
        for (int j=1;j<=i;++j) {
            dp[i][j]=dp[i-1][j];
            
            // モンスターを倒す場合
            if(j>0){
                if (j % 2 == 0) {
                    // 偶数回目に倒す場合
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 2*A[i-1]);
                } 
                else {
                    // 奇数回目に倒す場合
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + A[i-1]);
                }
            }
        }
    }

    // 最大の経験値を探す
    ll ans=0;
    for(int j=1;j<=N;++j) ans=max(ans, dp[N][j]);
    cout<<ans<<endl;

    return 0;
}
