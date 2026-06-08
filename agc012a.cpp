#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    /*int n;  cin>>n;
    vector<ll> a(3*n);
    rep(i,3*n) cin>>a[i];
    sort(rall(a));
    //for(auto aa:a)cout<<aa<<" ";cout<<endl;
    ll ans=0;
    rep(i,n){
        ans+=a[1+2*i];
    }
    cout<<ans<<endl;*/
    int n,m;    cin>>n>>m;
    int sum=0;
    rep(_,n){
        int tmp;    cin>>tmp;
        sum+=tmp;
    }
    cout<<(sum<=m?"Yes":"No")<<endl;
    return 0;
}
