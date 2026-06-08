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

    int n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n+1);
    rep(i,n) cin>>a[i];
    b[0]=0;
    for(int i=0;i<=n;i++) b[i] = b[i-1]+a[i-1];
    ll ans=-1e10;
    for(int i=0;i<=n-k;i++){
        ans=max(ans,b[k+i]-b[i]);
    }
    cout<<ans<<endl;
    return 0;
}