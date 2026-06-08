#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //解説動画で言った, 別解をやろうとしたけど, むりだった
    int n,m;    cin>>n>>m;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<ll> aa(n+1);
    for(int i=1;i<=n;i++) aa[i]=a[i]*i;
    
    vector<ll> summ(n+1);
    for(int i=1;i<=n;i++) summ[i]=summ[i-1]+aa[i];

    ll ans=-1e17;
    for(int i=1;i<=n-m+1;i++){
        ans=max(ans, summ[i+m]-summ[i-1] -m*a[i-1]);
    }
    cout<<ans<<endl;

    
    return 0;
}