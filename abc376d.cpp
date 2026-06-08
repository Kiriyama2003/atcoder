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
int main() {
    int n,m;    cin>>n>>m;
    vector<vector<int>> to(n+1);
    rep(i,m) {
        int a,b;    cin>>a>>b;
        a--,b--;
        if(b==0) b=n;
        to[a].push_back(b);
    }

    const int INF=1001001001;
    vector<int> dist(n+1,INF);
    dist[0]=0;
    queue<int> q;   q.push(0);

    while(!q.empty()){
        int now=q.front();  q.pop();
        for(int next:to[now]){
            if(dist[next]!=INF) continue;
            dist[next]=dist[now]+1;
            q.push(next);
        }
    }

    cout<<(dist[n]==INF?-1:dist[n])<<endl;

    return 0;
}
