#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<int> a(100009),b(100009);
    vector<vector<int>> g(100009);
    queue<int> q;

    REP(i,m){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);    g[b[i]].push_back(a[i]);
    }

    vector<int> dict(100009,-1);
    q.push(1);  //qに1を追加
    dict[1]=0;  //頂点1までは, 0

    while(!q.empty()){
        int pos=q.front();  q.pop();
        for(int i=0;i<(int)g[pos].size();i++){
            int to=g[pos][i];
            if(dict[to]==-1){
                dict[to]=dict[pos]+1;
                q.push(to);
            }
        }
    }

    REP(i,n) cout<<dict[i]<<endl;

    return 0;
}
