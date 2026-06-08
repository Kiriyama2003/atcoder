#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
struct Edge {
    int to;
    ll weight;
};
int main(){
    int N,M;    cin>>N>>M;
    vector<vector<Edge>> graph(N);
    dsu d(N);
    for (int i = 0;i< M; ++i) {
        int u, v;ll w;  cin >> u >> v >> w;
        graph[u-1].push_back({v-1, w});
        graph[v-1].push_back({u-1, -w});
        d.merge(u-1,v-1);
    }
    

    vector<ll> x(N, 1e9+1);

    rep(i,(int)d.groups().size()){
        x[d.groups()[i][0]]=0;
        int leader=d.groups()[i][0];
        queue<int> dd; dd.push(leader);
        //d.groups()[i][0] グループの肝

        while(!dd.empty()){
            ll num=dd.front();  dd.pop();
            rep(j,graph[num].size()){
                if(x[   graph[num][j] .to ] == 1e9+1) {
                    x[graph[num][j] .to] =  x[num] + graph[num][j].weight;
                    dd.push(graph[num][j] .to);
                }
            }
        }
    }
    rep(i,N) cout<<x[i]<<endl;

    return 0;
}