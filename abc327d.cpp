#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    vector<vector<int>> to(n);
    vector<int> a(m),b(m);
    rep(i,m){cin>>a[i]; a[i]--;}
    rep(i,m){cin>>b[i]; b[i]--;}

    rep(i,m){
        to[a[i]].push_back(b[i]);
        to[b[i]].push_back(a[i]);
    }

    vector<int> color(n,-1); //頂点iが訪問済みか
    auto dfs=[&](auto dfs,int v,int c=0)->bool{
        //頂点vに訪問済みなら, その頂点と塗りたい色が同じなら, trueを違うならfalseを返す
        if(color[v]!=-1) return color[v]==c;

        color[v]=c; //初めて頂点vに塗る
        for(int u:to[v]){
            //to[i] 頂点iから行く頂点
            if(!dfs(dfs,u,c^1)) return false;
        }
        return true;
    };

    rep(v,n){
        
        //cout<<"a";  //必ずn回実行
        if(color[v]==-1){
            //未訪問なら, 訪問する
            //連結なら, ここは1回しか行かない
            
            //cout<<"b";

            //falseが帰ってきたら,No
            if(!dfs(dfs,v)){cout<<"No"<<endl; return 0;}
        }
        //cout<<"c"<<endl;  //必ずn回実行
    }

    cout<<"Yes"<<endl;
    return 0;
}