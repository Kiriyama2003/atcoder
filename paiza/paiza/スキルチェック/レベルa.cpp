#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;  cin>>n;
    vector<int> a(n+1);
    REP(i,n) cin>>a[i];

    vector<vector<bool>> dp(n+1,vector<bool>(10100,false));
    dp[0][0]=true;

    REP(i,n){
        for(int j=0;j<=10000;j++){
            dp[i][j]=dp[i-1][j];
            if(j-a[i] >=0){
                dp[i][j] = dp[i][j] || dp[i-1][j-a[i]];
            }
        }
    }
    
    for(int i=10000;i>=0;i--){
        if(dp[n][i]) {cout<<i; return 0;}
    }

    

    return 0;
}