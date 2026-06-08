#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int h,w;    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    vector dp(h,vector<int>(w,0));
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(s[i][j]=='#') continue;
            dp[i][j]=1;
            if(i+1 < h) dp[i][j]=max(dp[i][j],dp[i+1][j]+1);
            if(j+1 < w) dp[i][j]=max(dp[i][j],dp[i][j+1]+1);
        }
    }
    for(auto v:dp){
        for(auto vv:v) cout<<vv<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<dp[0][0]<<endl;
    return 0;
}