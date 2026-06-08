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

int main() {
    int h,w,d;  cin>>h>>w>>d;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    
    

    vector<int> dist(h*w,INT_MAX);
    priority_queue<P, vector<P>, greater<P>> pq;

    auto index = [&](int i, int j){ return i * w + j; };
    //左上から0

    rep(i,h) rep(j,w){
        if(s[i][j] == 'H') {
            int idx = index(i, j);
            dist[idx] = 0;
            pq.emplace(0, idx);
        }
    }
    



    while(!pq.empty()) {
        auto [D, cur] = pq.top();   pq.pop();
        int ci = cur / w, cj = cur % w;
        if(D > dist[cur]) continue;
        rep(dir,4){
            int ni = ci + di[dir];
            int nj = cj + dj[dir];
            int next = index(ni, nj);

            if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if(s[ni][nj] == '#') continue;

            int nd = D + 1;
            if(nd >d) continue;

            if(nd < dist[next]) {
                dist[next] = nd;
                pq.emplace(nd, next);
            }
        }
    }

    int count = 0;
    rep(i,h*w) if(dist[i]<=d) count++;

    cout<<count<<endl;
    return 0;
}