#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()


int get(vector<vector<int>> g,int s){
    
    int n=g.size();

    //頂点sから最短距離
    vector<int> dist(n,-1);
    dist[s]=0;  //sから[s]までの距離は0

    queue<int> Q;   Q.push(s);

    while(Q.size()>0){
        int x=Q.front(); Q.pop();
        rep(i,g[x].size()){
            int y=g[x][i];
            if(dist[y]==-1){
                dist[y]=dist[x]+1;
                Q.push(y);
            }
        } 
    }
    return *max_element(all(dist));
}

int main() {
    int n1,n2,m;    cin>>n1>>n2>>m;
    //n1+n2頂点, m辺

    vector<vector<int>> g(n1+n2);
    rep(i,m){
        int a,b;    cin>>a>>b;  a--;b--;
        g[a].push_back(b);  g[b].push_back(a);
    }

    //頂点0から, 各頂点への最大値
    //頂点n1+n2-1から, 各頂点への最大値
    cout<<get(g,0)+get(g,n1+n2-1)+1<<endl;

    return 0;
}