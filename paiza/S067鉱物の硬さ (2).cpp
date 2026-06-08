#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//S067:鉱物の硬さ
//https://paiza.jp/challenges/share/YREJ2vxiQ9oGvMQ5dRUTzGqcQaIZ0593DId-NiUvFik
int main() {
    int n,m;    cin>>n>>m;
    
    vector<vector<int>> g(n);
    vector<int> in(n, 0);


    rep(i,m){
        int h,s;    cin>>h>>s;  h--,s--;
        g[h].push_back(s);  in[s]++;
    }

    
    queue<int> q;
    rep(i,n) if(in[i] == 0) q.push(i);

    vector<int> order;
    while(!q.empty()) {
        if(q.size() > 1){ cout<<"-1"; return 0;}
        
        int node = q.front();   q.pop();
        order.push_back(node + 1);

        for(int neighbor : g[node]) {
            in[neighbor]--;
            if(in[neighbor] == 0) q.push(neighbor);
        }
    }


    if((int)order.size() == n) {
        rep(i,n){
            if(i != 0) cout<<" ";
            cout<<order[i];
        }
    }else cout<<"-1";

    return 0;
}
