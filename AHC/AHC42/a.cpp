#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;

    ll n;  cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    /*auto move=[&](int grid,bool ij,bool updown,int num)->void{
        rep(i,n-num){
            //横に移動
            if(!ij==false) s[i][grid]=s[i+num][grid];

            //縦に移動
            if(ij) s[grid][i]=s[grid][i+num];
        } 
    };*/

        // --- ここから ---
    // 盤面をboolで管理しやすいように変換: 鬼(x), 福(o)
    vector<vector<bool>> ghostExists(n, vector<bool>(n,false));
    vector<vector<bool>> fukuExists(n, vector<bool>(n,false));
    rep(i,n)rep(j,n){
        if(s[i][j] == 'x') ghostExists[i][j] = true;
        if(s[i][j] == 'o') fukuExists[i][j] = true;
    }

    // 操作を記録するための配列
    // 例: ('U', 3) は「列 3 を上方向(U)に1マス動かす」
    //     ('L', 5) は「行 5 を左方向(L)に1マス動かす」
    vector<pair<char,int>> moves;

    // 指定列colを上方向に count 回動かし、
    // 続いて下方向に count 回動かして元に戻す関数
    auto removeUp = [&](int col, int count){
        // count 回 上にシフト
        for(int k=0; k<count; k++) moves.push_back({'U', col});
        // count 回 下にシフト
        for(int k=0; k<count; k++) moves.push_back({'D', col});
    };
    auto removeDown = [&](int col, int count){
        for(int k=0; k<count; k++) moves.push_back({'D', col});
        for(int k=0; k<count; k++) moves.push_back({'U', col});
    };

    auto removeLeft = [&](int row, int count){
        for(int k=0; k<count; k++) moves.push_back({'L', row});
        for(int k=0; k<count; k++) moves.push_back({'R', row});
    };
    auto removeRight = [&](int row, int count){
        for(int k=0; k<count; k++) moves.push_back({'R', row});
        for(int k=0; k<count; k++) moves.push_back({'L', row});
    };

    // 「列 col の上方向に福が無いかどうか」判定する関数
    auto canShiftUp = [&](int row, int col){
        // row より上のマス(0 ~ row-1)に福(o)が無いならOK
        for(int r = 0; r < row; r++) if(fukuExists[r][col]) return false;
        return true;
    };
    // 下方向、左方向、右方向版も同様に
    auto canShiftDown = [&](int row, int col){
        // row より下(N-1 ~ row+1)に福が無いならOK
        for(int r = row+1; r < n; r++) if(fukuExists[r][col]) return false;
        return true;
    };
    auto canShiftLeft = [&](int row, int col){
        for(int c = 0; c < col; c++) if(fukuExists[row][c]) return false;
        return true;
    };
    auto canShiftRight = [&](int row, int col){
        for(int c = col+1; c < n; c++) if(fukuExists[row][c]) return false;
        return true;
    };

    // 実際に鬼を取り除くループ
    // 盤面を (i,j) = (上から i 行目, 左から j 列目) の順に走査
    rep(i,n){
        rep(j,n){
            // まだ鬼が残っているか？
            if(ghostExists[i][j]){
                // 方向を判定して、該当のシフト操作を実行
                // i+1 or j+1 回シフト→逆シフトする
                // 実際には「i+1 回」でなく「(i+1)」や「(n-i)」など、
                // 取り除きたい鬼が確実に外にはみ出す回数を使う
                if(canShiftUp(i,j)){
                    removeUp(j, i+1);
                    for(int r=0; r<=i; r++){
                        if(ghostExists[r][j]) ghostExists[r][j] = false; 
                    }
                }
                else if(canShiftDown(i,j)){
                    removeDown(j, (n - i));
                    for(int r=i; r<n; r++){
                        if(ghostExists[r][j]) ghostExists[r][j] = false;
                    }
                }
                else if(canShiftLeft(i,j)){
                    removeLeft(i, j+1);
                    for(int c=0; c<=j; c++){
                        if(ghostExists[i][c]) ghostExists[i][c] = false;
                    }
                }
                else if(canShiftRight(i,j)){
                    removeRight(i, (n - j));
                    for(int c=j; c<n; c++){
                        if(ghostExists[i][c]) ghostExists[i][c] = false;
                    }
                }
            }
        }
    }

    for(auto &op : moves) cout<<op.first<<" "<<op.second<<"\n";
	return 0;
}