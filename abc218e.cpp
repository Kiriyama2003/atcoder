#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    //n頂点,m辺
    //c>=0なら報酬　c<0なら罰金
    //辺を取り除いた後も, 連結でなければならない
    //報酬の最大化

    vector<pair<int,P>> es;
    rep(i,m){
        int a,b,c;   cin>>a>>b>>c;  a--,b--;
        es.emplace_back(c,P(a,b));
    }
    sort(all(es));

    //最小全域木
        //クラスカル　小さい辺から試していく
    ll ans=0;
    dsu d(n);
    for(auto [cost,edge]:es){
        auto [a,b]=edge;
        if(cost<0 or !d.same(a,b)) d.merge(a,b);
        else ans+=cost; //繋がない辺のコストを, 足す
    }
    cout<<ans<<endl;

    return 0;
}