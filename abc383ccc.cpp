#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int,int>;

const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};

int main() {
    int h,w,D; cin>>h>>w>>D;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    const int INF = 1001001001;
    vector<vector<int>> dist(h, vector<int>(w,INF));
    queue<P> q;
    rep(i,h)rep(j,w) {
        if(s[i][j] == 'H') {
            dist[i][j] = 0;
            q.emplace(i,j);
        }
    }

    while(q.size()) {
        auto [i,j] = q.front(); q.pop();
        int d = dist[i][j];
        rep(v,4) {
            int ni = i+di[v];
            int nj = j+dj[v];
            
            if(ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
            if(s[ni][nj] == '#') continue;
            if(dist[ni][nj] <= d+1) continue;


            dist[ni][nj] = d+1;
            q.emplace(ni,nj);
        }
    }

    int ans = 0;
    rep(i,h)rep(j,w) if(dist[i][j] <= D) ans++;
    cout<<ans<<endl;
    return 0;
}