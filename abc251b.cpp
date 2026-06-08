#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main() {
    int n,w;    cin>>n>>w;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<w;j++){
            if(j>=a[i] && dp[i-1][j-a[i]]!=-1 &&dp[i-1][j-a[i]]<3){
                if(dp[i-1][j] !=-1) dp[i][j]=min(dp[i-1][j],dp[i-1][j-a[i]]+1);
                else dp[i][j]=dp[i-1][j-a[i]]+1;
            } 
            else dp[i][j]=dp[i-1][j];
        }
    }

    /*for(auto aa:dp){
        for(auto bb:aa){
            cout<<bb<<" ";
        }
        cout<<endl;
    }*/

    int ans=0;
    for(int i=1;i<=w;i++){
        if(dp[n][i]>0)  ans++;
    }

    cout<<ans<<endl;


    return 0;
}
