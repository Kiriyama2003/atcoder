#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<vector<int>> g;  //g[a]={ , , ,}　頂点aと隣接する頂点
vector<bool> seen;  //訪問済みならtrue
set<int> this_group;    //ある連結成分に所属する, 頂点の集合
ll this_group_e;        //ある連結成分に所属する, 頂点がもつ, 辺の合計

void dfs(int v){
    seen[v]=true;       //訪問済みにする
    this_group.insert(v);   //連結成分に自頂点を追加する
    this_group_e+=g[v].size();  //
    for(auto next_v:g[v]){
        if(!seen[next_v]) dfs(next_v);
    }
}


int main(){
    int n,m;    std::cin>>n>>m;
    g.resize(n+1);
    rep(i,m){
        int a,b;    std::cin>>a>>b;
        g[a].push_back(b);  g[b].push_back(a);
    }

    ll result=0;
    seen.assign(n+1,false);
    for(int i=1;i<=n;i++){
        //各連結成分ごと
        if(!seen[i]){
            this_group.clear(); //初期化
            this_group_e=0;     //初期化
            
            dfs(i);
            ll s=this_group.size(); //ある連結成分に含まれる, 頂点の数
            result += (s*(s-1))/2 - this_group_e/2;
            //辺は2重でカウントされてるから割る2
            //頂点k個から, 2個を選ぶ
        }
    }
    cout<<result<<endl;

    return 0;
}