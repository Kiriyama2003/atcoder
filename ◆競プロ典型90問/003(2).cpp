#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
void chmin(int& a,int b){a=min(a,b);}

vector<vector<int>> G(100000);
int N;

// 頂点 s から DFS (ここでは再帰を使う)
void dfs_recursive(int v, vector<int> &dist, int d) {
    //vが今頂点, dが経路数

    dist[v] = d;    //更新はここだけ
    for(auto nv : G[v]){
        if(dist[nv] == -1) dfs_recursive(nv, dist, d + 1);
    }
}

// 頂点 s から DFS を行い、各頂点への距離を返す
//2回dfsするから, 分けてる　1個に分けれないかね
vector<int> dfs(int s) {
    vector<int> dist(N, -1);
    dfs_recursive(s, dist, 0);
    return dist;
}

int main() {
    // 入力
    cin >> N;
    for (int i = 0; i < (N - 1); ++i) {
        int a, b; cin >> a >> b; --a, --b;
        G[a].push_back(b);  G[b].push_back(a);
    }

    // 頂点 0 から DFS
    auto dist0 = dfs(0);

    // 距離最大の点を求める
    int mx = -1, mv = -1;   //mxは最大距離, mvは最大距離の頂点
    for (int v = 0; v < N; ++v) {
        if(mx < dist0[v]) mx = dist0[v], mv = v;
    }

    // 頂点 mv から DFS
    auto distmv = dfs(mv);

    // その最大値を求める
    mx = -1;
    for (int v = 0; v < N; ++v) mx = max(mx, distmv[v]);
    cout << (mx + 1) << endl;
}
