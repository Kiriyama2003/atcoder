#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
const long long INF = 1LL<<60;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}

int n,m;    //n：頂点の数　m：辺の数
vector<vector<int>> g;      //g[1]：from頂点　to頂点x
vector<int> dp(100100,-1);  //dp[1]　頂点1からの, 最長パスの長さ

int rec(int v){
    if(dp[v]!=-1) return dp[v]; //一回行ったら, もういかない
    int res=0;
    for(auto nv:g[v]) res=max(res,rec(nv)+1);
    return dp[v]=res;
}
int main(){
    cin>>n>>m;
    g.resize(n);

    rep(i,m){
        int x,y;
        cin>>x>>y;  x--;y--;
        g[x].push_back(y);
    }

    int res=0;
    rep(i,n) res=max(res,rec(i));
    cout<<res<<endl;

    return 0;
}