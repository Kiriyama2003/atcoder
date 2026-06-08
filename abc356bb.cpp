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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;  vector<ll>A(m,0); 
    //m種類の栄養　n品の食品　m種類の栄養について,A以上接種したいね
    rep(i,m) {ll a; cin>>a; A[i]=a;}

    //X n行->n品目　それぞれm種類の栄養素
    rep(i,n)    rep(i,m) {ll a; cin>>a; A[i]-=a;}

    rep(i,m)    if(A[i]>0){cout<<"No"<<endl; return 0;}
    cout<<"Yes"<<endl;
    return 0;
}