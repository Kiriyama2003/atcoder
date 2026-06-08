#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(),(v).end()

// -----------------------------
// 方向エンコード (dr,dc) -> 0..3
//   0=上, 1=右, 2=下, 3=左
// -----------------------------
int encodeDir(int dr,int dc){
    if(dr == -1 && dc ==  0) return 0; // up
    if(dr ==  0 && dc == +1) return 1; // right
    if(dr == +1 && dc ==  0) return 2; // down
    if(dr ==  0 && dc == -1) return 3; // left
    return -1; // 斜め等は無効
}

// -----------------------------
// shapeTable[fromDir][toDir] = 1..6
//   0=上,1=右,2=下,3=左
//   同じ方向・180度ターンも含む
//   1: 左右  2: 上下
//   3: 左+下 4: 左+上 5: 上+右 6: 右+下
// -----------------------------
static int shapeTable[4][4] = {
    //       to=0(上)  1(右)  2(下)  3(左)
    /*0=上*/  {   2,     5,     2,    4 },
    /*1=右*/  {   5,     1,     6,    1 },
    /*2=下*/  {   2,     6,     2,    3 },
    /*3=左*/  {   4,     1,     3,    1 },
};

// -----------------------------
// 人の情報
// -----------------------------
class Person {
public:
    int i_s, j_s;
    int i_t, j_t;
    int dist; // マンハッタン距離

    Person(int is_, int js_, int it_, int jt_)
        : i_s(is_), j_s(js_), i_t(it_), j_t(jt_),
          dist(abs(is_ - it_) + abs(js_ - jt_)) {}
};

// -----------------------------
// 鉄道ゲーム管理
// -----------------------------
class RailwayGame {
private:
    int N, M, K, T;
    vector<Person> people;

    ll currentMoney;
    int currentTurn;

    // 盤面: 0=更地, 1..6=線路, 7=駅
    vector<vector<int>> board;

    // 行動 (Tターンぶん)
    //  - "-1"       (待機)
    //  - "0 i j"   (駅)
    //  - "1..6 i j"(線路)
    //  - "-1"      (未設定)
    vector<string> actions;

    // BFS 用方向ベクトル
    int di[4] = {-1,0,1,0};
    int dj[4] = { 0,1,0,-1};

public:
    RailwayGame(int N_, int M_, int K_, int T_)
        : N(N_), M(M_), K(K_), T(T_)
    {
        currentMoney = K;
        currentTurn = 0;
        board.assign(N, vector<int>(N, 0));
        actions.resize(T, "-1");
    }

    void addPerson(int is_, int js_, int it_, int jt_){
        people.emplace_back(is_, js_, it_, jt_);
    }


    void runGame(){
        // 1) 距離が小さい順にソート
        sort(all(people), [](auto &a,auto &b){
            return a.dist < b.dist;
        });

        // 2) 各人の家～職場に対して BFS → 敷設
        for(auto &p : people){
            if(currentTurn>=T) break;

            auto path = getShortestPath(p.i_s, p.j_s, p.i_t, p.j_t);
            if(path.empty()) continue; // 経路なし

            if(!buildRoute(path)){
                // 敷設失敗(資金不足など)
                // → 何もせず次の人へ
            }
        }

       
    }


    void outputActions(){
        for(int i=0; i<T; i++) cout << actions[i] << "\n";
    }

private:
    // -----------------------------
    // BFS で (si,sj)->(ti,tj) 最短経路
    // -----------------------------
    vector<pair<int,int>> getShortestPath(int si,int sj,int ti,int tj){
        vector<vector<int>> dist(N, vector<int>(N,1e9));
        vector<vector<pair<int,int>>> par(N, vector<pair<int,int>>(N,{-1,-1}));
        queue<pair<int,int>>q;
        dist[si][sj] = 0;
        q.push({si,sj});

        while(!q.empty()){
            auto [ri,rj] = q.front(); q.pop();
            if(ri==ti && rj==tj) break;
            rep(k,4){
                int nr=ri+di[k], nc=rj+dj[k];
                if(nr<0||nr>=N||nc<0||nc>=N) continue;
                if(dist[nr][nc] > dist[ri][rj]+1){
                    dist[nr][nc] = dist[ri][rj]+1;
                    par[nr][nc] = {ri,rj};
                    q.push({nr,nc});
                }
            }
        }

        if(dist[ti][tj]>1e8) return {}; // 到達不可

        // 経路復元
        vector<pair<int,int>> path;
        int cr=ti, cc=tj;
        while(cr!=-1 && cc!=-1){
            path.push_back({cr,cc});
            auto p=par[cr][cc];
            cr=p.first; cc=p.second;
        }
        reverse(all(path));
        return path;
    }

    // -----------------------------
    // buildRoute: 端点を駅，途中を線路
    // -----------------------------
    bool buildRoute(const vector<pair<int,int>> &path){
        if(path.size()<1) return false;

        // 1) 家側を駅
        if(!placeStation(path[0].first, path[0].second)){
            return false;
        }
        // 2) 中間マスに線路
        for(int i=1; i<(int)path.size()-1; i++){
            int r0=path[i-1].first, c0=path[i-1].second;
            int r1=path[i].first,   c1=path[i].second;
            int r2=path[i+1].first, c2=path[i+1].second;

            int fd = encodeDir(r1-r0,c1-c0);
            int td = encodeDir(r2-r1,c2-c1);
            if(fd<0 || td<0) return false; // 斜めなど
            int shape = shapeTable[fd][td];
            if(shape<1 || shape>6) return false;

            if(!placeLine(r1,c1, shape)){
                return false;
            }
        }
        // 3) 職場側を駅
        if(path.size()>=2){
            if(!placeStation(path.back().first, path.back().second)){
                return false;
            }
        }
        return true;
    }

    // -----------------------------
    // placeStation: マスを駅(7)に
    //  - 既に駅ならコスト0
    //  - それ以外なら5000
    // -----------------------------
    bool placeStation(int r,int c){
        if(currentTurn>=T) return false;
        if(board[r][c]==7){
            // 既に駅 => コスト不要
            buildAction(0, r, c, /*costFree=*/true);
            return true;
        }
        // 更地or線路 => コスト5000
        if(currentMoney<5000) return false;
        currentMoney -= 5000;
        board[r][c] = 7;
        buildAction(0,r,c);
        return true;
    }

    // -----------------------------
    // placeLine: マスを線路(1..6)に
    //  - 既に駅 => そのまま(コスト不要)
    //  - 同形状線路 => そのまま(コスト不要)
    //  - 異なる線路 => 駅化(5000)
    //  - 更地 => 100
    // -----------------------------
    bool placeLine(int r,int c, int shape){
        if(currentTurn>=T) return false;
        int cell = board[r][c];
        if(cell==7){
            // 駅
            buildAction(shape,r,c,/*costFree=*/true);
            return true;
        } else if(cell==shape){
            // 同じ線路形状
            buildAction(shape,r,c,/*costFree=*/true);
            return true;
        } else if(cell>=1 && cell<=6 && cell!=shape){
            // 異なる線路 => 駅化
            if(currentMoney<5000) return false;
            currentMoney-=5000;
            board[r][c] = 7;
            buildAction(0,r,c);
            return true;
        } else {
            // 更地(0)
            if(currentMoney<100) return false;
            currentMoney-=100;
            board[r][c] = shape;
            buildAction(shape,r,c);
            return true;
        }
    }

    // -----------------------------
    // 行動 (駅 or 線路)
    // -----------------------------
    void buildAction(int p,int r,int c, bool costFree=false){
        if(currentTurn>=T) return;
        if(p==0){
            // 駅
            ostringstream oss;
            oss << 0 << " " << r << " " << c;
            actions[currentTurn] = oss.str();
        } else {
            // 線路(1..6)
            ostringstream oss;
            oss << p << " " << r << " " << c;
            actions[currentTurn] = oss.str();
        }
        currentTurn++;
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M,K,T;
    cin >> N >> M >> K >> T;

    RailwayGame game(N,M,K,T);

    rep(i,M){
        int is_,js_,it_,jt_;
        cin >> is_ >> js_ >> it_ >> jt_;
        game.addPerson(is_,js_,it_,jt_);
    }

    game.runGame();
    game.outputActions();

    return 0;
}
