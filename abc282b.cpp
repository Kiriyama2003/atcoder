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
    int n,m;    cin>>n>>m;
    vector<string>s(n);
    rep(i,n) cin>>s[i];
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            set<int>st;
            rep(k,m) if(s[i][k]=='o' || s[j][k]=='o') st.insert(k);
            if(st.size()==m) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}