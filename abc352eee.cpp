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
    
    vector<pair<pair<int,int>,vector<int>>> a(m);

    rep(i,m){
        cin>>a[i].first.second>>a[i].first.first;
        a[i].second.resize(a[i].first.second);
        //rep(j,k[i]) {int num;  cin>>num; a[i][j]=--num;}
        for(int &j:a[i].second){cin>>j; j--;}
    }
    
    sort(all(a));

    ll ans=0;
    dsu d(n);

    for(auto [costk,vec]:a){
        for(int j=1;j<costk.second;j++) {
            if (d.same(vec[0], vec[j])) continue;
            
            d.merge(vec[0], vec[j]);
            
            ans += costk.first;
        }
    }
    cout<<(d.groups().size() == 1 ? ans : -1)<<endl;
    return 0;
}