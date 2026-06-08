#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;        cin>>n>>m; 
    string s;       cin>>s;
    vector<int>c(n);    rep(i,n) cin>>c[i];
    
    //ps[i]={1,3,4,5} 色がiの　sの番号
    vector<vector<int>> ps(m);
    rep(i,n) ps[c[i]-1].push_back(i);

    string ans=s;
    rep(i,m){
        int l=ps[i].size();
        rep(j,l){
            ans[ps[i][(j+1)%l]]=s[ps[i][j]];
        }
    }
    cout<<ans<<endl;
    
    return 0;
}