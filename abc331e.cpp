#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//C問題の灰(高い), 茶(全て)にあっても可笑しくない技術的難易度
int main() {
    int n,m,l;  cin>>n>>m>>l;
    vector<int> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];
    set<pair<int,int>> bad;
    rep(i,l){
        int c,d;    cin>>c>>d;  c--,d--;
        bad.insert({c,d});
    }

    vector<int> ord(m);
    iota(all(ord),0);   //bを降順にしたときの、添え字を格納したもの
    sort(all(ord),
        [&](int i,int j){return b[i]>b[j];}
    );

    int ans=-1;
    rep(i,n){
        rep(j,m){
            if(!bad.count({i,ord[j]})) {
                ans = max(ans,a[i]+b[ord[j]]);
                break;
            }
        }
    }
    cout<<ans<<endl;



    return 0;
}