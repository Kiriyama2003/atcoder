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
    vector<vector<int>>vec(m);
    rep(i,m){
        int c;  cin>>c;
        vec[i].resize(c);
        rep(j,c) cin>>vec[i][j];
    }

    int ans=0;
    //1<<m 2のm乗 　1を, m回左にシフト
    for(int b=1;b<(1<<m);b++){
        set<int>s;
        rep(i,m){
            if((b>>i) & 1) {  //bをi回右シフトし, 一番左のbitと1の論理積
                rep(j,vec[i].size()) s.insert(vec[i][j]);
            }
        }
        if(s.size()==n) ans++;
    }
    cout<<ans<<endl;
    return 0;
}