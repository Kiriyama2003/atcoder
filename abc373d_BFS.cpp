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
        int u,v;   ll w;    cin>>u>>v>> w;    u--; v--;
        graph[u].push_back({v, w});
        graph[v].push_back({u, -w});
        
    }

    vector<ll> x(N,LLONG_MAX);  // 各頂点の値, 初期値は未設定を示す
    vector<bool> visited(N,false);  //訪問済みかどうか

    //連結成分ごと
    rep(i,N){
        if(!visited[i]) {
            x[i]=0;     queue<int> q;   q.push(i);

            while (!q.empty()) {
                int u=q.front();  q.pop();
                visited[u] = true;
                for(auto& edge : graph[u]){
                    int v = edge.to;
                    ll w = edge.weight;
                    if(!visited[v]){x[v]=x[u]+w;    q.push(v);}
                }
            }
        }
    }

    rep(i,N) cout<<x[i]<<endl;    

    return 0;
}
