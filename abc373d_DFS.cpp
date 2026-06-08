#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
struct Edge{int to; ll weight;};
int main() {
    int N,M;   cin>>N>>M;
    vector<vector<Edge>> graph(N);

    rep(i,M){
        int u,v,w;    cin>>u>>v>>w;    u--; v--;
        graph[u].push_back({v, w});
        graph[v].push_back({u, -w});
        
    }

    vector<ll> x(N);  // 各頂点の値, 初期値は未設定を示す
    vector<bool> visited(N,false);  //訪問済みかどうか

    auto dfs = [&](auto dfs, int v, ll val) {
        if (visited[v]) return;
        else{
            visited[v] = true;
            x[v] = val;

            for(Edge e : graph[v]) dfs(dfs, e.to, val+e.weight);
        }
    };

    rep(i,N){
        if(visited[i]) continue;
        else dfs(dfs,i,0);
    }

    rep(i,N) cout<<x[i]<<endl;    

    return 0;
}
