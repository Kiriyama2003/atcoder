#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<string> s(n),t(n);
    rep(i,n) cin>>s[i];
    rep(i,n) cin>>t[i];

    //90度回転
    auto rot = [&](vector<string> a) {
        vector<string> res(n, string(n, '.'));
        rep(i,n) rep(j,n) res[j][n-1-i] = a[i][j];
        return res;
    };

    //左上に寄せる
    auto normalize=[&](vector<string> a) {
        //左上を探す
        int li = n, lj = n;
        rep(i,n)rep(j,n) if(a[i][j] == '#') {
            li = min(li, i);    lj = min(lj, j);
        }

        vector<string> res(n, string(n, '.'));
        rep(i,n)rep(j,n) if(a[i][j]=='#'){res[i-li][j-lj]='#';}
        return res;
    };

    //2つが同じか
    auto same=[&](vector<string> a,vector<string> b){
        return normalize(a) == normalize(b);
    };
    
    rep(ri,4) {
        if(same(s,t)){cout<<"Yes"<<endl;return 0;}
        t=rot(t);
    }
  cout<<"No"<<endl; return 0;
}