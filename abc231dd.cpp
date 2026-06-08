#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;  cin>>n>>m;
    vector<int> d(n);
    dsu uf(n);

    rep(i,m){
        int a,b;    cin>>a>>b;  a--,b--;
        if(uf.same(a,b)){ cout<<"No"<<endl; return 0;}
        uf.merge(a,b);

        d[a]++; d[b]++;
    }
    
    rep(i,n){
        if(d[i]>2){ cout<<"No"<<endl; return 0; }
    }
    cout<<"Yes"<<endl;
}