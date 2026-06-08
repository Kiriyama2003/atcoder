#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using mint = modint998244353;
int main(){
    int n,m,k;    cin>>n>>m>>k;

    //n頂点, m辺,k回移動
    //1->2 2->3 ... n->1
    vector<vector<int>> g(n);
    rep(i,n) g[i].push_back((i+1)%n);
    rep(i,m){
        int a,b;    cin>>a>>b;  a--,b--;
        g[a].push_back(b);
    }


    return 0;
}