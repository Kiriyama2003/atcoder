#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#include <atcoder/all>
using namespace atcoder;
using mint = atcoder::modint998244353;
int main(){
    ll n;   cin>>n;
    vector<int> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];
    vector<vector<mint>> dp(n,vector<mint>(2));
    dp[0][0]=dp[0][1]=1;

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) dp[i][0] +=dp[i-1][0];
        if(a[i]!=b[i-1]) dp[i][0] +=dp[i-1][1];

        if(b[i]!=b[i-1]) dp[i][1] +=dp[i-1][1];
        if(b[i]!=a[i-1]) dp[i][1] +=dp[i-1][0]; 

    }
    mint ans=dp[n-1][0].val()+dp[n-1][1].val();

    cout<<ans.val()<<endl;
    return 0;
}