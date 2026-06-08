#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,m;    cin>>n>>m;
    vector x(n,vector<bool>(n)), y(n,vector<bool>(n));
    rep(i,m){
        int a,b;    cin>>a>>b;  a -= 1,b -=1;
        x[a][b] = x[b][a] = true;
    }
    rep(i,m){
        int c,d;    cin>>c>>d;  c-=1,d-=1;
        y[c][d] = y[d][c] = true;
    }

    vector<int> p(n);
    iota(begin(p), end(p), 0);
    int ans = 0;

    do {
        bool ok = true;
        rep(i,n) rep(j,n){
            if(x[i][j] != y[p[i]][p[j]]) ok=false;
        }
        if(ok){cout<<"Yes"<<endl; return 0;}
    }while(next_permutation(all(p)));
    cout<<"No"<<endl;
    return 0;
}