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
    dsu gr(n);
    rep(i,m){
        int a,b;    cin>>a>>b;  a--;b--;
        gr.merge(a,b);
    }
    int ans=0;
    rep(i,n) if(gr.leader(i)==i)ans++;
    cout<<ans;
    return 0;
}