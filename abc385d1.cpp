#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
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
    int n,m; ll sx,sy;  cin>>n>>m>>sx>>sy;
  
    using D = map<ll,set<ll>>;

    map<ll,set<ll>> xs, ys;
    /*xs={
        [0]   {},   y==0のx
        [1]   {},
        [2]   {},
        [3]   {}
        }
    */
  
    rep(i,n) {
      int x,y;  cin>>x>>y;
      xs[y].insert(x);  ys[x].insert(y);
    }
  
    int ans = 0;    //壊した家の個数

    auto f = [&](D& xs, D& ys, ll y, ll l, ll r) {
        //二分探索するやつ, しないやつ, 固定の軸の値, 左, 右

      if (l > r) swap(l,r);
      while (1) {
        auto it = xs[y].lower_bound(l);
        if(it == xs[y].end()) break;   //ないなら
        
        //超えていたら
        if (*it > r) break;
        
        ys[*it].erase(y);       //サブ
        xs[y].erase(it);        //ターゲット
        ans++;
      }
    };
  
    rep(mi,m) {
      char d; ll c; cin>>d>>c;
      ll nx = sx, ny = sy;

      if (d == 'U') ny += c;
      if (d == 'D') ny -= c;
      if (d == 'R') nx += c;
      if (d == 'L') nx -= c;

      //(nx,ny)：移動後の位置
      //(sx,sy)：移動前の位置

      //yが固定 第3引数が軸の固定
      if(sy == ny) f(xs, ys, sy, sx, nx);

      //xが固定
      else f(ys, xs, sx, sy, ny);

      sx = nx; sy = ny;
    }
  
    printf("%lld %lld %d\n", sx, sy, ans);
    return 0;
}