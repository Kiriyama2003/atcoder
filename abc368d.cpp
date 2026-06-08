#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<vector<int>> tree;
vector<int> subtreeSize;
vector<bool> isImportant;

void dfs(int v, int p) {
    //頂点v, その親p
    //それぞれの頂点には, 1回しかいかない　木構造だから

    //まずなにもしてない状態　頂点vが, 重要な頂点であるか？
    subtreeSize[v] = isImportant[v];
    for(int u : tree[v]){
        if(u==p) continue;
        else if(u!=p){
            dfs(u, v);
            subtreeSize[v] += subtreeSize[u];
        }
    }
}

int main() {
    int N,K;    cin>>N>>K;
    
    tree.resize(N+1);
    isImportant.resize(N+1,false);
    subtreeSize.resize(N+1,0);
    
    rep(i,N-1){int A,B; cin>>A>>B;  tree[A].push_back(B);   tree[B].push_back(A);}

    int imp;
    rep(i,K){ cin>>imp;  isImportant[imp]=true;}
    
    
    // 任意の重要な頂点からDFSを開始（1つ目の重要な頂点）
    dfs(imp, -1);
    
    // DFSによりサブツリーサイズが計算されました
    int minSize = 0;
    REP(i,N) if(subtreeSize[i]>0) minSize++;
    cout<<minSize<<endl;
    
    return 0;
}
