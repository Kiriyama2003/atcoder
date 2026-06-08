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
void chmin(ll& a,ll b){a=min(a,b);}
const ll INF = 1e18;
//https://atcoder.jp/contests/practice2/tasks/practice2_a
//https://atcoder.github.io/ac-library/production/document_ja/dsu.html

int main(){
    int n,q,t,u,v;    cin>>n>>q;
    dsu f(n);   //n頂点0辺の無向グラフ 0 <= n <= 10^8
    //入力される頂点は, [0,n)だから, デクリメントしなくていい
    while(q--){
        cin>>t>>u>>v;
        if(t==0){
            f.merge(u,v);
        }else{
            cout<<(f.same(u,v)?"1":"0")<<endl;
        }
    }
    return 0;
}