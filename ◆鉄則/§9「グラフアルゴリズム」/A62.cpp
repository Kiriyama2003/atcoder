#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//D
int n,m;    
vector<int> a(100009),b(100009),g[100009];
vector<bool> visited(100009);
void dfs(int pos){
    visited[pos]=true;
    for(int i=0;i<(int)g[pos].size();i++){
        int nex=g[pos][i];
        if(!visited[nex]) dfs(nex);
    }
    return;
};
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);    g[b[i]].push_back(a[i]);
    }

    dfs(1);

    string s="The graph is connected.";
    for(int i=1;i<=n;i++){if(!visited[i]) s="The graph is not connected.";} 
    cout<<s<<endl;
    return 0;
}