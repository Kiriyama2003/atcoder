#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //N：n種類の品物　重さをW以下にする
    //1<=N<=100, 1<=W<=100'000
    ll N,W;     cin>>N>>W;
    ll total_value=0;
    
    //w：重さ　v価値  1<=w<=W, 1<=v<=1e9
    vector<ll> w(109),v(109);
    for(int i=1;i<=N;i++){
        cin>>w[i]>>v[i];
        total_value+=v[i];
    } 

    vector<vector<ll>> dp(N+1,vector<ll>(total_value+1,1e15));

    //動的計画法
    //横軸を価値の総量
    dp[0][0]=0;
    //N種類の品物
    for(int i=1;i<=N;i++){
        for(int j=0;j<=total_value;j++){
            if(j<v[i]) dp[i][j]=dp[i-1][j];
            else if(j>=v[i]) dp[i][j]=min(dp[i-1][j], dp[i-1][j-v[i]]+w[i]);
        }
    }


    ll ans=0;
    for(int i=0;i<=total_value;i++) if(dp[N][i] <=W) ans=i;
    cout<<ans<<endl;
    return 0;
}