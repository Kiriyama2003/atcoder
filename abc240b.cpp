#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    set<ll> st;
    rep(i,n){
        ll num; cin>>num;
        st.insert(num);
    }
    cout<<st.size()<<endl;
    return 0;
}
