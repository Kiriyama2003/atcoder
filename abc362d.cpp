#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
struct Edge{
    int to,cost;
    Edge(int to,int cost): to(to),cost(cost){}
};
int main(){
    //n頂点, m辺, 単純連結無効グラフ
    //頂点iの重み=a_i   B_i：辺iの重み

    int n,m;    cin>>n>>m;      vector<int> a(n);
    rep(i,n) cin>>a[i];

    //頂点1から, 頂点iまでのパス　重みの最小値となる重み
    //頂点n個だから, (n-1)個出力する

    vector<vector<Edge>> go(n);
    rep(i,m){
        int u,v,b;  cin>>u>>v>>b;   u--;v--;
        go[u].emplace_back(v,b+a[v]);
        go[v].emplace_back(u,b+a[u]);
    }

    /*//gの確認
    for(auto aa:g){
        for(auto aaa:aa) cout<<aaa.to<<" "<<aaa.cost<<"  ";
        cout<<endl;
    }*/

    
    const ll INF=1e18;      vector<ll> dist(n,INF);
    //dist[i]：1からiまでの距離
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> q;

    
    dist[0]=a[0];
    //現在までのコスト=1,現在の位置=頂点1 
    q.emplace(a[0],0);  //q={(a[0],0)}={(1,0)}

    while(!q.empty()){
        //d現在までのコスト　v現在の頂点の番号
        auto [d,v]=q.top();     q.pop();
        
        if(dist[v] == d){
           //頂点vに行く全ての辺について
            for(Edge e:go[v]){
                ll nd=d+e.cost;
                if(nd < dist[e.to]){
                    dist[e.to]=nd;
                    q.emplace(nd,e.to);
                }
            } 
        }       
    }

    for(int i=1;i<n;i++) cout<<dist[i]<<((i!=n-1)?" ":"\n");
    //d[1] d[2] d[3] ···· d[n-1]
    return 0;
}