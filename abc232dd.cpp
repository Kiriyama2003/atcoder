#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int h,w;    cin>>h>>w;
    vector c(h,vector<char>(w));
    rep(i,h) rep(j,w) cin>>c[i][j];

    vector dp(h+1,vector<int>(w+1));
    for(int i=h-1;i>=0;i--){
        for(int j=w-1;j>=0;j--){
            if(c[i][j]=='#') continue;
            dp[i][j]= max(dp[i+1][j],dp[i][j+1])+1;
        }
    }
    /*for(auto v:dp){
        for(auto vv:v) cout<<vv<<" ";
        cout<<endl;
    }
    cout<<endl;*/
    cout<<dp[0][0]<<endl;
}