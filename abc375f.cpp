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
void chmin(int& a,int b){a=min(a,b);}


int main(){
    int n,m,q;  cin>>n>>m>>q;
    vector<tuple<int,int,int>> edges;
    rep(i,m){
        int a,b,c;  cin>>a>>b>>c; a--;b--;
        edges.emplace_back(a,b,c);
    }
    vector<bool> blocked(m,false);
    
    vector<tuple<int,int,int>> qs;
    rep(qi,q) {
        int type;   cin>>type;
        if(type==1){
            int i;      cin>>i;     i--;
            blocked[i] = true;
            qs.emplace_back(type,i,-1);
        }else{
            int x,y;    cin>>x>>y;  x--;y--;
            qs.emplace_back(type,x,y);
        }
    }

    const ll INF = 1e18;
    vector dist(n, vector<ll>(n, INF));
    rep(i,n) dist[i][i] = 0;

    //1回も削除されない辺は, 最初から追加してよい
    rep(i,m) if (!blocked[i]) {
        auto [a,b,c] = edges[i];
        dist[a][b] = dist[b][a] = c;
    }
    //通過点k iからjまで
    rep(k,n) rep(i,n) rep(j,n){
        dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
    }

    vector<ll> ans;
    for(int qi=q-1;qi>=0;qi--){
        auto [type,x,y] = qs[qi];
        if(type == 1) {
            auto [a,b,c] = edges[x];
            rep(i,n)rep(j,n) {
                dist[i][j] = min(dist[i][j], dist[i][a]+c+dist[b][j]);
                dist[i][j] = min(dist[i][j], dist[i][b]+c+dist[a][j]);
            }
        }else ans.push_back(dist[x][y]);
    }

    reverse(all(ans));
    for(ll val : ans) cout<<(val==INF?-1:val)<<endl;
    return 0;
}