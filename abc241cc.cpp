#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
// (x,y) を始点として (dx,dy) 方向を調べる
// 問題の条件を満たす列が見つかれば true
bool calc(int x, int y, int dx, int dy, int N, const vector<string>& S) {
    int count = 0;
    rep(i,6){
        // マス目からはみ出したら失敗
        if (!(0 <= min(x, y) && max(x, y) < N)) return false;
        if (S[x][y] == '#') count++;
        x += dx;    y += dy;
    }
    return count >= 4; // 4 個以上黒で塗られていれば true
}

int main() {
    int N;  cin>>N;
    vector<string> S(N);
    rep(i,N) cin >> S[i];

    int Dx[]={1, 0, 1, 1};
    int Dy[]={0, 1, 1, -1};

    rep(x,N){
        rep(y,N){
            for(int d=0;d<4;++d) {
                if(calc(x, y, Dx[d], Dy[d], N, S)){cout<<"Yes"<<endl; return 0;}
            }
        }
    }
    

    cout << "No" << endl;
    return 0;
}
