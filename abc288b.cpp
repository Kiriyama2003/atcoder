#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //std::ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n,k;    cin>>n>>k;
    vector<string>s(n);
    rep(i,n) cin>>s[i];

    set<string>st;
    rep(i,k) st.insert(s[i]);
    for(auto s:st) cout<<s<<endl;

    return 0;
}