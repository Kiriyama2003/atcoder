#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s,t; cin>>s>>t;
    int ssize=s.size(),tsize=t.size();

    vector<vector<int>> dp(2001,vector<int>(2001));
    dp[0][0]=0;
    for(int i=0;i<=ssize;i++){
        for(int j=0;j<=tsize;j++){
            if(i>=1 && j>=1 && s[i-1]==t[j-1]){
                dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+1});
            }else if(i>=1 && j>=1){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }else if(i>=1) dp[i][j]=dp[i-1][j];
            else if(j>=1) dp[i][j]=dp[i][j-1];
        }
    }

    cout<<dp[ssize][tsize]<<endl;

    return 0;
}