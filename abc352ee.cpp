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
    vector<int> k(m),cost(m);
    vector<vector<int>> a(m);

    rep(i,m){
        cin>>k[i]>>cost[i];
        a[i].resize(k[i]);
        //rep(j,k[i]) {int num;  cin>>num; a[i][j]=--num;}
        for(int &j:a[i]){cin>>j; j--;}
    }
    
    vector<int> ord(m);
    iota(all(ord),0);   //0,1,2,3,4,..m-1
    sort(all(ord),[&](int i,int j){
        return cost[i]<cost[j];
    });

    ll ans=0;
    dsu d(n);

    for(int i:ord){
        for(int j=1;j<k[i];j++) {
            if (d.same(a[i][0], a[i][j])) continue;
            
            d.merge(a[i][0], a[i][j]);
            ans += cost[i];
        }
    }
    cout<<(d.groups().size() == 1 ? ans : -1)<<endl;
    return 0;
}