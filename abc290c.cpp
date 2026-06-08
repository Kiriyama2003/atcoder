#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k;    cin>>n>>k;  set<ll>st;
    rep(i,n){
        ll an;cin>>an;
        st.insert(an);
    }
    ll i=0;
    while(i<k){
        if(!st.count(i)) break;
        i++;
    }
    cout<<i<<endl;
    return 0;
}