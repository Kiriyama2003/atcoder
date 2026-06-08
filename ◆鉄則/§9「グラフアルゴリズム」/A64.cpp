#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    
    vector<vector<pair<int,int>>> g(100009,vector<pair<int,int>>());
    REP(i,m){
        int a,b,c;  cin>>a>>b>>c;
        g[a].push_back({b,c});  g[b].push_back({a,c});
    }
    

    vector<int> cur(100009,2e9);    //距離の暫定値
    cur[1]=0;
    vector<bool> kakutei(100009,false);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
    q.push({cur[1],1}); //現在までのコスト, 現在の位置

    while(!q.empty()){
        int pos=q.top().second;     q.pop();
        if(kakutei[pos]) continue;

        kakutei[pos]=true;
        rep(i,g[pos].size()){
            int nex=g[pos][i].first;
            int cost=g[pos][i].second;

            if(cur[nex] > cur[pos]+cost){
                cur[nex]=cur[pos]+cost;
                q.push({cur[nex],nex});
            }
        }
    }

    REP(i,n){
        if(cur[i]==2e9) cout<<-1<<endl;
        else cout<<cur[i]<<endl;
    }

    return 0;
}
