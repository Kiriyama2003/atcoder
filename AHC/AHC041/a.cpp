// DFS
#include <bits/stdc++.h>
using namespace std;

void get_input(int &N, int &M, int &H, vector<int> &A, vector<vector<int>> &G, vector<int> &x, vector<int> &y) {
    cin >> N >> M >> H;
    A.resize(N);
    for (int &a : A) {
        cin >> a;
    }
    G.resize(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    x.resize(N);
    y.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
}

void print_output(const vector<int> &parent, const int &score = -1) {
    for (const int &x : parent) cout << x << " ";
    cout << "\n";
    if (score != -1) cerr << score << "\n";
}

void rec(int u, vector<int> &par, vector<int> &height, const vector<vector<int>> &G, const int &H) {
    for (int v : G[u]) {
        if (par[v] != -2) continue;
        par[v] = u;
        height[v] = height[u] + 1;
        if (height[v] < H) rec(v, par, height, G, H);
    }
}

vector<int> dfs(const int &N, const vector<vector<int>> &G, const int &H) {
    vector<int> parent(N, -2), height(N);
    queue<int> Q;
    for (int i = 0; i < N; i++) {
        if (parent[i] != -2) continue;      //訪問済みならとばす
        parent[i] = -1;
        height[i] = 0;
        rec(i, parent, height, G, H);
    }
    return parent;
}

int main() {
    int N, M, H;
    vector<int> A, x, y;
    vector<vector<int>> G;
    get_input(N, M, H, A, G, x, y);

    vector<int> parent = dfs(N, G, H);

    print_output(parent);
}
