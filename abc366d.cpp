#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int a[101][101][101];
int sum[102][102][102];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;


    rep(i,n) rep(j,n) rep(k,n) cin>>a[i][j][k];
    rep(i,n) rep(j,n) rep(k,n) sum[i+1][j+1][k+1]=a[i][j][k];

    rep(i,n+1) rep(j,n+1) rep(k,n+1) sum[i+1][j][k]+=sum[i][j][k];
    //x軸について累積和

    rep(i,n+1) rep(j,n+1) rep(k,n+1) sum[i][j+1][k]+=sum[i][j][k];
    rep(i,n+1) rep(j,n+1) rep(k,n+1) sum[i][j][k+1]+=sum[i][j][k];
    
    int q;  cin>>q;
    rep(i,q){
        int lx,rx,ly,ry,lz,rz;  cin>>lx>>rx>>ly>>ry>>lz>>rz;
        lx--;   ly--;   lz--;
        cout<<sum[rx][ry][rz]
        - sum[lx][ry][rz] - sum[rx][ly][rz] - sum[rx][ry][lz] 
        + sum[lx][ly][rz] + sum[lx][ry][lz] + sum[rx][ly][lz]
        - sum[lx][ly][lz] <<endl;
    }

    return 0;
}