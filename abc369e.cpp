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
void chmin(ll& a,ll b){a=min(a,b);}
const ll INF = 1e18;


int main(){
    int n,m,q;    cin>>n>>m;
   
    vector<tuple<int,int,int>> es;
    
    vector<vector<ll>> dist(n, vector<ll>(n,INF));
    rep(i,n) dist[i][i] = 0;
    rep(i,m){
        int a,b,c;  cin>>a>>b>>c; a--;b--;
        es.emplace_back(a,b,c);
        chmin(dist[a][b],c);
        chmin(dist[b][a],c);
    }
    rep(k,n) rep(i,n) rep(j,n) chmin(dist[i][j], dist[i][k]+dist[k][j]);
    
    cin>>q;
    rep(qi,q) {
        int k;  cin>>k;
        vector<int> ei(k);
        rep(i,k) cin>>ei[i],ei[i]--;
        ll ans = INF;
        //k!通り
        do {
            //2^k通り 順番
            //k=2なら, 00 01 10 11 で0ならそのまま, 1なら反対
            rep(s,1<<k){   
                ll now = 0; int v = 0;
                rep(i,k) {
                    auto [a,b,c] = es[ei[i]];
                    if((s>>i) &1) swap(a,b);
                    now += dist[v][a];  //通らないといけない端まで
                    now += c;           //通らないといけない端を通る
                    v = b;  //現在の位置
                }

                now += dist[v][n-1];    //最後の頂点へ
                chmin(ans, now);
            }
        }while(next_permutation(all(ei)));
        cout<<ans<<endl;
    }
    return 0;
}