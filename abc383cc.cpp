#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>; // {距離, マス座標の1次元表現}

int main() {
    int H, W, D;
    cin >> H >> W >> D;
    vector<string> S(H);
    for (int i = 0; i < H; ++i) cin >> S[i];

    // グリッドの線形インデックスを使用
    auto index = [&](int i, int j) { return i * W + j; };

    vector<int> dist(H * W, INT_MAX); // 各マスへの最短距離
    priority_queue<P, vector<P>, greater<P>> pq; // {距離, 線形インデックス}

    // 初期化: 加湿器の位置からスタート
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (S[i][j] == 'H') {
                int idx = index(i, j);
                dist[idx] = 0;
                pq.emplace(0, idx);
            }
        }
    }

    // 移動方向（上下左右）
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, -1, 0, 1};

    // Dijkstra's Algorithm
    while (!pq.empty()) {
        auto [d, cur] = pq.top();
        pq.pop();

        // 現在のマスの座標
        int ci = cur / W, cj = cur % W;

        // 現在の距離が既知の距離より大きければスキップ
        if (d > dist[cur]) continue;

        // 4方向に移動
        for (int dir = 0; dir < 4; ++dir) {
            int ni = ci + di[dir];
            int nj = cj + dj[dir];
            int next = index(ni, nj);

            // 範囲外や壁は無視
            if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
            if (S[ni][nj] == '#') continue;

            // 次のマスへの距離を計算
            int nd = d + 1;
            if (nd > D) continue; // 距離制限を超える場合は無視

            // 最短距離を更新
            if (nd < dist[next]) {
                dist[next] = nd;
                pq.emplace(nd, next);
            }
        }
    }

    // 加湿されたマスの数をカウント
    int count = 0;
    for (int i = 0; i < H * W; ++i) {
        if (dist[i] <= D) count++;
    }

    cout << count << endl;
    return 0;
}
