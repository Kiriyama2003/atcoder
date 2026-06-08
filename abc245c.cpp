#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k; cin>>n>>k;
    vector<ll> a(n+1),b(n+1);

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];

    vector<ll> dp(n+1,false),ep(n+1,false);
    dp[1]=ep[1]=true;
    //dp[i] aのi番目はいいか
    //ep[i] bのi番目はいいか

    for(ll i=2;i<=n;i++){
        if(dp[i-1] == 1){
            if(abs(a[i-1]-a[i]) <= k) dp[i]=true;
            if(abs(a[i-1]-b[i]) <= k) ep[i]=true;
        }
        if(ep[i-1] == 1){
            if(abs(b[i-1]-a[i]) <= k) dp[i]=true;
            if(abs(b[i-1]-b[i]) <= k) ep[i]=true;
        }
    }
    if(dp[n]||ep[n])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}
