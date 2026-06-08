#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<int> a(n+1,0),b(n+1,0),dp(n+1,0);
    for(int i=2;i<=n;i++) cin>>a[i];
    //1から2迄,   

    for(int i=3;i<=n;i++) cin>>b[i];
    //1-3

    dp[1]=0;    //1までの最小時間は, 0
    dp[2]=a[2]; //2までの最小時間は, a[2]
    for(int i=3;i<=n;i++){
        //dp[i]：i迄の最小時間
        dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
    }
    cout<<dp[n]<<endl;



    return 0;
}