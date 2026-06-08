#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n; cin>>n;
    multiset<ll> st;
    rep(i,n){
        ll num;
        cin>>num;
        st.insert(num);
    }
    ll cnt=0;
    while(*st.rbegin()-*st.begin() >1){
        ll ma=*st.rbegin(),mi=*st.begin();

        auto itrmax=lower_bound(all(st),ma);
        auto itrmin=lower_bound(all(st),mi);
        st.erase(itrmax);st.erase(itrmin);

        st.insert(ma-1);
        st.insert(mi+1);
        cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}