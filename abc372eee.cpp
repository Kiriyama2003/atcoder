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
    int n,q;    cin>>n>>q;

    dsu uf(n);
    vector<vector<int>> top(n);
    rep(i,n) top[i].push_back(i);

    rep(qi,q) {
        int type;   cin>>type;
        if (type == 1) {
            int u,v;    cin>>u>>v;  u--,v--;
            u = uf.leader(u);   v = uf.leader(v);
            if (u == v) continue;
            
            vector<int> d = top[u];
            d.insert(d.end(), top[v].begin(), top[v].end());
            sort(d.rbegin(), d.rend());
            if (d.size() > 10) d.resize(10);

            uf.merge(u,v);
            top[uf.leader(u)] = d;
            //uとvを繋げたから, top[uf.leader(v)]=dは不要
        } else {
            int v,k;    cin>>v>>k;  v--;
            v = uf.leader(v);   //頂点vが所属するグループのリーダを, 出力
            int ans = -1;
            if(top[v].size() >=k) ans=top[v][k-1]+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}