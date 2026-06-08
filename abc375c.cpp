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
int main(){
    int n;  cin>>n;
    vector<string> a(n),b(n);
    rep(i,n) cin>>a[i];

    b=a;

    //#は黒　.は白
    rep(i,n) rep(j,n){
        int ni=i,nj=j;

        //回転させる回数
        int k=min({ni+1,nj+1,n-ni,n-nj}) %4;

        //回転させる操作を, k回行う
        rep(ki,k){
            swap(ni,nj);
            nj=n-1-nj;
        }

        b[ni][nj]=a[i][j];
    }
    rep(i,n) cout<<b[i]<<endl;
    return 0;
}