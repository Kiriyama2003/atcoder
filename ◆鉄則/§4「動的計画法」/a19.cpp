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
    
    //w：重さ　v価値  1<=w<=W, 1<=v<=1e9
    vector<ll> w(109),v(109);
    for(int i=1;i<=N;i++) cin>>w[i]>>v[i];

    vector<vector<ll>> dp(109,vector<ll>(100009));
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++) dp[i][j]=-1e15;
    }



    //動的計画法
    dp[0][0]=0;
    for(int i=1;i<=N;i++){
        for(int j=0;j<=W;j++){
            //jがw[i]より小さいため, w[i]分, 左に巻き戻せない
            if(j<w[i]) dp[i][j]=dp[i-1][j];
            else if(j>=w[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }


    ll ans=0;
    for(int i=0;i<=W;i++) ans=max(ans,dp[N][i]);
    cout<<ans<<endl;
    return 0;
}