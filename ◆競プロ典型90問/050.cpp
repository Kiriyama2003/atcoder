#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,l;    cin>>n>>l;

    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i<l) dp[i]=dp[i-1];
        else{
            dp[i]=(dp[i-1]+dp[i-l])%1000000007;
        }
    }
    cout<<dp[n]<<'\n';
    return 0;  
}