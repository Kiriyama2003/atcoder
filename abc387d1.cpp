#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

using P = tuple<int, int, int, int>; //(i, j, cost, type)

int H, W;
vector<string> grid;

//移動方向（横: 左、右, 縦: 上、下）
int di_h[] = {0, 0};
int dj_h[] = {-1, 1}; //横移動

int di_v[] = {-1, 1};
int dj_v[] = {0, 0}; //縦移動

int bfs(int si, int sj, int gi, int gj) {
    queue<P> q;
    vector<vector<vector<bool>>> visited(H, vector<vector<bool>>(W, vector<bool>(2, false)));

    q.emplace(si, sj, 0, 0);        //横移動からスタートよ？
    q.emplace(si, sj, 0, 1);        //縦移動からスタートYO
    visited[si][sj][0] = true;
    visited[si][sj][1] = true;

    while(!q.empty()){
        auto [i, j, cost, type] = q.front();
        q.pop();

        if(i == gi and j == gj) return cost;

        
        if(type == 0){    //横移動
            rep(k, 2){
                int ni = i + di_h[k];
                int nj = j + dj_h[k];

                if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] != '#' && !visited[ni][nj][1]) {
                    visited[ni][nj][1] = true;
                    q.emplace(ni, nj, cost + 1, 1);     //縦移動
                }
            }
        }else{        //縦移動
            rep(k, 2){
                int ni = i + di_v[k];
                int nj = j + dj_v[k];

                if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] != '#' && !visited[ni][nj][0]) {
                    visited[ni][nj][0] = true;
                    q.emplace(ni, nj, cost + 1, 0);     //横移動
                }
            }
        }
    }

    return -1;
}

int main() {
    cin >> H >> W;
    grid.resize(H);
    rep(i, H) cin>>grid[i];

    int si, sj, gi, gj;

    rep(i, H) rep(j, W){
        if (grid[i][j] == 'S') si = i,sj = j;
        if (grid[i][j] == 'G') gi = i,gj = j;
    }

    cout<<bfs(si, sj, gi, gj)<<'\n';
    return 0;
}
