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
    string ans(n,'?');

    for(int i=1;i<=m;i++){
        vector<int>ps;
        for(int j=0;j<n;j++){
            if(c[j]==i) ps.push_back(j);
        }
        rotate(ps.rbegin(),ps.rbegin()+1,ps.rend());

        int cnt=0;
        for(int j=0;j<n;j++){
            if(c[j]==i) {
                ans[j] = s[ps[cnt]];
                cnt++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}