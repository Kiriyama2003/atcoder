#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;    cin>>n>>m;

    multiset<ll> st;
    rep(i,n) { 
        ll a;   cin>>a;     st.insert(a);
    }

    vector<ll> B(m);    rep(i,m) cin>>B[i];
    sort(B.begin(),B.end());

    bool check=1;   ll sum=0;
    for(int i=0;i<m;i++){
        auto v=st.lower_bound(B[i]);
        if(v==st.end()){
            check=0;    break;
        }
        sum+=*v;
        
        st.erase(v);
    }

    cout<<(check?sum:-1)<<endl;



    return 0;
}