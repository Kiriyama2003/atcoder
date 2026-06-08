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
    int n,m;    cin>>n>>m;
    //m種類の栄養　n品の食品
    vector<ll>A(m,0); //それぞれA以上接種したいね
    vector<ll>now(m,0);
    rep(i,m) {ll a; cin>>a; A[i]=a;}

    //X n行->n品目　それぞれm種類の栄養素
    rep(i,n)    rep(i,m) {ll a; cin>>a; now[i]+=a;}

    rep(i,m)    if(A[i]>now[i]){cout<<"No"<<endl; return 0;}
    cout<<"Yes"<<endl;

    return 0;
}