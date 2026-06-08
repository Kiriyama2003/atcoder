#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

struct Edge{
    int to,cost;
    Edge(){};
    Edge(int to,int cost): to(to),cost(cost){}
};
int main(){
    int n;  cin>>n;
    //ステージnが遊べるようになるまでの時間
    vector<vector<Edge>> g(n);
    rep(i,n-1){
        int a,b,x;  cin>>a>>b>>x;   x--;
        g[i].emplace_back(i+1,a);   //頂点0から頂点1まで, コストa
        g[i].emplace_back(x,b);     //頂点0から頂点xまで, コストb
    }
    /*for(auto gg:g){
        cout<<'{';
        for(auto [to,cost]:gg) cout<<to<<" "<<cost<<" ";
        cout<<'}'<<endl;
    }*/

    const ll INF=1e18;
    vector<ll> dist(n,INF);
    //dist[i] 頂点iまでの時間
    dist[0]=0;

    using P=pair<ll,int>;
    priority_queue<P,vector<P>,greater<P>> q;
    //常に最小の要素を取りだす
    q.emplace(0,0);

    while(!q.empty()){
        //コストが小さい順に出す
        auto [d,v]=q.top();
        //距離d, 相手v
        q.pop();

        if(dist[v]!=d) continue;
        //qに追加されるときに, dist[v]=dと更新される
        //しかし現在はそれではない, つまりdist[v]=dは更新されて, これの派生については, 全部正しくないため, 考慮する必要がない

        for(auto e:g[v]){
            ll nd=d+e.cost;
            if(nd>=dist[e.to]) continue;    //更新されない


            dist[e.to]=nd;      //更新する
            q.emplace(nd,e.to);
        }
    }
    cout<<dist[n-1]<<endl;
    return 0;
}