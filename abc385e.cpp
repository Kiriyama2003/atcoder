#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> depth;
vector<int> parent;
vector<int> layer2_nodes; // 第2層のノード
vector<int> layer3_count; // 第2層から第3層への接続数

void dfs(int node, int par, int d) {
    depth[node] = d;
    parent[node] = par;
    for (int child : tree[node]) {
        if (child == par) continue; // 親への逆走を防ぐ
        dfs(child, node, d + 1);
    }
}

int main() {
    int n;
    cin >> n;

    tree.resize(n);
    depth.resize(n);
    parent.resize(n, -1);

    // 入力: 木の隣接リスト
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--; // 0-indexed
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // 根を0としDFS
    dfs(0, -1, 0);

    // 第2層と第3層の情報を収集
    for (int node = 0; node < n; node++) {
        if (depth[node] == 1) { // 第2層のノード
            layer2_nodes.push_back(node);
            int count = 0;
            for (int child : tree[node]) {
                if (depth[child] == 2) { // 第3層のノード
                    count++;
                }
            }
            layer3_count.push_back(count);
        }
    }

    // 第2層から第3層への接続を均等化
    int total_connections = accumulate(layer3_count.begin(), layer3_count.end(), 0);
    int layer2_count = layer2_nodes.size();

    // 均等化する目標値（floor に合わせる）
    int target = total_connections / layer2_count;

    int removals = 0;
    for (int count : layer3_count) {
        if (count > target) {
            removals += count - target;
        }
    }

    cout << removals << endl;

    return 0;
}
