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

    int n;  cin>>n;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];

    set<ll> st;
    rep(i,n) st.insert(A[i]);
    vector<ll> ans(n,0);

    for(int i=0;i<n;i++){
        auto v=st.upper_bound(A[i]);
        if(v == st.end()){
            ans[0]++;   continue;
        }
        ans[(int)st.size()-distance(st.begin(),v)]++;
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<endl;

    return 0;
}