#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,q;    cin>>n;
    vector<ll> x(n),xx(n+1);
    rep(i,n) cin>>x[i];
    xx[0]=0;
    rep(i,n){
        cin>>xx[i+1];
        xx[i+1]+=xx[i];
    }

    cin>>q;
    rep(i,q){
        ll l,r; cin>>l>>r;
        ll itr_l = lower_bound(all(x),l) -x.begin();
        ll itr_r = upper_bound(all(x),r) -x.begin();

        cout<<xx[itr_r] - xx[itr_l-1]<<endl;
    }
    return 0;
}