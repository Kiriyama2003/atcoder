#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const long long INF = 1LL<<60;
//計算量O(N)
int main(){
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    
    vector<int> dp(n);
    dp[0]=0;
    dp[1]=abs(a[0]-a[1]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-2]+abs(a[i-2]-a[i]) , dp[i-1]+abs(a[i-1]-a[i]));
    }
    cout<<dp[n-1]<<endl;
    return 0;
}