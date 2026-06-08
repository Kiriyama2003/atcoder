#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//4方向の移動を表す
const int dx[4]={-1, 1, 0, 0};
const int dy[4]={0, 0, -1, 1};
int main() {
    int h,w,q;    cin>>h>>w>>q;

    //壁があるかどうか
    vector<vector<bool>> grid(h,vector<bool>(w,true));

    ll wall_count=h*w;  // 初期の壁の数


    for(int k=0;k<q;++k) {
        int r,c;    cin>>r>>c;  r--; c--;
        //壁がある
        if (grid[r][c]) {
            grid[r][c] = false;
            wall_count--;
        } else {
            //4方向に探索
            for(int d=0;d<4;++d) {
                int x=r,y=c;

                //壁が見つかるまで移動
                while (x >= 0 && x < h && y >= 0 && y < w) {
                    if (grid[x][y]) {
                        grid[x][y] = false;
                        wall_count--;
                        break;
                    }
                    x+=dx[d];
                    y+=dy[d];
                }
            }
        }
    }


    cout<<wall_count<<endl;

    return 0;
}