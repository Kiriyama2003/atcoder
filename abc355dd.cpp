#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<pair<ll,ll>> v;
    rep(i,n) {
        int l,r;    cin>>l>>r;
        v.emplace_back(l,0);
        v.emplace_back(r,1);
    }
       
    sort(all(v));
    int res=0;
    ll ans= n*ll(n-1)/2;
    for(auto [x,t]:v){
        if(t==0) ans-=res;
        else res++;
    }
    cout<<ans<<endl;
    return 0;

}