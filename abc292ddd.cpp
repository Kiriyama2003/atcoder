//BFSとDFSのgtpの解答　ACした
/*#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, const vector<vector<int>>& adj, vector<bool>& visited, int& vertex_count, int& edge_count) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        vertex_count++;

        for (int neighbor : adj[node]) {
            edge_count++;
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    edge_count /= 2; // 無向グラフではエッジが2回カウントされるため、2で割る
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u--; v--; // 0-indexed に変換
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);
    bool is_valid = true;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int vertex_count = 0;
            int edge_count = 0;
            bfs(i, adj, visited, vertex_count, edge_count);
            if (vertex_count != edge_count) {
                is_valid = false;
                break;
            }
        }
    }

    cout << (is_valid ? "Yes" : "No") << endl;

    return 0;
}
*/
/*#include <iostream>
#include <vector>

using namespace std;

void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited, int& vertex_count, int& edge_count) {
    visited[node] = true;
    vertex_count++;

    for (int neighbor : adj[node]) {
        edge_count++;
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, vertex_count, edge_count);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        u--; v--; // 0-indexed に変換
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);
    bool is_valid = true;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int vertex_count = 0;
            int edge_count = 0;
            dfs(i, adj, visited, vertex_count, edge_count);
            edge_count /= 2; // 無向グラフではエッジが2回カウントされるため、2で割る
            if (vertex_count != edge_count) {
                is_valid = false;
                break;
            }
        }
    }

    cout << (is_valid ? "Yes" : "No") << endl;

    return 0;
}
*/