#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N,M;    cin>>N>>M;
    atcoder::dsu uf(N);
    int K = N;
    rep(i,M){
        int u,v;    cin>>u>>v;  --u,--v;
        if(!uf.same(u, v)) uf.merge(u, v), K--;
    }
    cout<<M - (N - K)<<"\n";
}