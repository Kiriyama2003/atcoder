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
    int n,m;    cin>>n>>m;
    vector<string>s(n);
    rep(i,n) cin>>s[i];
    int ans=n;

    for (int bit=0;bit<(1<<n);bit++) {
        vector<bool> exist(m);
        int cnt=0;
        for (int i=0;i<n;i++) {
            if ((bit>>i)&1) {
                ++cnt;
                for(int j=0;j<m;j++) {
                    if(s[i][j]=='o') exist[j]=true;
                }
            }
        }


        bool all_exist=true;
        for (int j=0;j<m;j++) {
            if(exist[j]==0) all_exist=false;
        }
        if (all_exist) ans=min(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}