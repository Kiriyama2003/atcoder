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

struct Med {
  int r, c, e;
  Med() {}
  Med(int r, int c, int e): r(r), c(c), e(e) {}
};

int main() {
    int h,w;  cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    int si=0,sj=0,ti=0,tj=0;
    rep(i,h)rep(j,w) {
        if(s[i][j] == 'S') si=i,sj=j;
        if(s[i][j] == 'T') ti=i,tj=j;
    }

    int n;    cin>>n;
    vector<Med> meds(n);
    rep(i,n) {
        int r,c,e;  cin>>r>>c>>e;   --r,--c;
        meds[i] = Med(r,c,e);
    }

    meds.emplace_back(si,sj,0);     //スタート地点
    meds.emplace_back(ti,tj,0);     //ゴール地点
    n += 2;     //薬の個数
    int smi =n-2;   //meds[n-2]がスタート地点
    int tmi =n-1;   //meds[n-1]がゴール地点
    
    const int INF = 1001001001;

    vector<vector<int>> to(n); //to[i] 頂点iから行ける頂点

    rep(sv,n) {
        auto [sr,sc,se] = meds[sv];


        vector dist(h, vector<int>(w, INF));
        dist[sr][sc] = 0;

        queue<P> q;     q.emplace(sr,sc);

        while (!q.empty()) {
            auto [i,j] = q.front();     q.pop();
            rep(dir,4) {
                int ni = i+di[dir], nj = j+dj[dir];
                if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
                if (s[ni][nj] == '#') continue;
                if (dist[ni][nj] != INF) continue;

                dist[ni][nj] = dist[i][j]+1;
                q.emplace(ni,nj);
            }
        }

        rep(v,n) if (sv != v) { //自分以外の薬について
            auto [r,c,e] = meds[v];
            if (dist[r][c] <= se) to[sv].push_back(v);
        }
    }
    //上　ある薬から, 別の薬に行けるかどうかを, toを作成しただけ

    vector<bool> dist(n,false);   //dist[i] 薬iまで行けるか
    queue<int> q;
    dist[smi] = true;  //スタート地点は当然ながら, 到達可能
    q.push(smi);
    while (!q.empty()) {
        int v=q.front();    q.pop();
        for(int u : to[v]) {
            if (dist[u]) continue;  //既に到達可能なら, continue
            else{
                dist[u] = true;
                q.push(u);
            }
        }
    }

    cout<<(dist[tmi]?"Yes":"No")<<endl;
  return 0;
}