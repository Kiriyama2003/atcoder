#include <iostream>
#include <vector>
#include <map>

// 深さ優先探索（DFS）を使用して、行列内の全ての人を取得する
void dfs(int node, std::map<int, std::vector<int>>& graph, std::vector<bool>& visited, std::vector<int>& result) {
    visited[node] = true;
    result.push_back(node);
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited, result);
        }
    }
}

int main() {
    int n, m;
    std::cin >> n >> m;

    // 各プレイヤーが他のプレイヤーに勝利した場合の関係を保持するグラフ
    std::map<int, std::vector<int>> graph;

    // m 回の対戦結果を処理
    for (int i = 0; i < m; ++i) {
        int x, y;
        std::cin >> x >> y;
        // x が y に勝利した場合、x から y への辺を追加
        graph[x].push_back(y);
    }

    // 各プレイヤーが他のプレイヤーに勝利した場合の関係を記録する
    std::vector<bool> visited(n + 1, false);
    std::vector<std::vector<int>> matrices; // 行列を記録するためのベクター

    // 各プレイヤーについて深さ優先探索（DFS）を実行して行列を取得する
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            std::vector<int> result;
            dfs(i, graph, visited, result);
            matrices.push_back(result);
        }
    }

    // 各行列の先頭のプレイヤーを出力する
    for (const auto& matrix : matrices) {
        std::cout << "Leader: " << matrix[0] << std::endl;
    }

    return 0;
}
