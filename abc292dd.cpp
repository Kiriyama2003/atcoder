#include<bits/stdc++.h>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;    cin>>n>>m;
    //n個の頂点, m個の辺　無向グラフ
    vector<int> u(m),v(m);
    rep(i,m){ cin>>u[i]>>v[i];    u[i]--;v[i]--;}

    dsu D(n);
    rep(i,m) D.merge(u[i],v[i]);

    vector<int> vs(n),es(n);
    //vs[1] 1が, 自分が属するグループのリーダである人がvs[i]人いる
    //es[1] 
	for(int i=0;i<n;i++) vs[D.leader(i)]++;
	
	for(int i=0;i<m;i++) es[D.leader(u[i])]++;

    cout<<(vs==es ? "Yes":"No")<<endl;


    return 0;
}
