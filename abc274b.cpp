#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    int h,w;    cin>>h>>w;
    vector<string>s(h); rep(i,h) cin>>s[i];

    vector<string>ans(w);
    rep(i,w) rep(j,h) ans[i]+= s[j][i];
    rep(i,w) cout<<count(all(ans[i]),'#')<<" ";
    cout<<endl;
    return 0;
}