#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int h,w;    cin>>h>>w;
    vector<vector<int>> g(h,vector<int>(w));
    rep(i,h) rep(j,w) cin>>g[i][j];
    
    bool check=true;
    rep(i,h){
        for(int j=i;j<h;j++){
            rep(k,w){
                for(int l=k;l<w;l++){
                    if(g[i][k]+g[j][l] > g[j][k]+g[i][l]) check=false;
                }
            }
        }
    }
    cout<<(check?"Yes":"No")<<endl;
    return 0;

}