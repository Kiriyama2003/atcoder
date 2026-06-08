#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N;    cin >> N;
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    // DPテーブル。各要素の初期値は0にする。
    vector<vector<ll>> dp(N,vector<ll>(10, 0));
    dp[0][A[0]] = 1;


  // DPループ
    for (int i = 1; i < N; i++) {
        rep(j,10){
        
            dp[i][(j + A[i]) % 10] += dp[i - 1][j];
            dp[i][(j * A[i]) % 10] += dp[i - 1][j];

            dp[i][(j + A[i]) % 10] %= 998244353;
            dp[i][(j * A[i]) % 10] %= 998244353;
        
        }
    }

    rep(i,10) cout<<dp[N-1][i]<<endl;

  return 0;
}
