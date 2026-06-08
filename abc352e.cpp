#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
using P=pair<int,int> ;
using mint = modint998244353;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //TLE 最小全域木をunion_findでといた, クラスカル法がある
    int n,m;    cin>>n>>m;
    vector<pair<int,P>> es;
    rep(i,m){
        int k,cost; cin>>k>>cost;
        vector<int> tmp;
        rep(j,k) {int num;  cin>>num; tmp.push_back(num);}

        for(int ii=0;ii<=k-2;ii++) {
            for(int iii=ii+1;iii<=k-1;iii++){
                es.emplace_back(cost,P(tmp[ii]-1,tmp[iii]-1));
            }
        }
    }
    sort(all(es));

    ll ans=0;
    dsu d(n);
    for(auto [cost,edge]:es){
        auto [a,b]=edge;
        if(!d.same(a,b)){
            d.merge(a,b);
            ans+=cost; //繋がない辺のコストを, 足す
        }
    }
    vector<vector<int>> aa=d.groups();
    if(aa.size()==1) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}