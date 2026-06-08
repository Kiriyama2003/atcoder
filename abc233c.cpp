#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

vector<vector<ll>> a;
ll n,x,ans=0;
void dfs(ll pos,ll seki){
    if(pos==n){
        if(seki==x) ans++;
        return;
    }
    for(ll c:a[pos]){
        if(seki*c > x) continue;
        dfs(pos+1,seki*c);
    }
}


int main() {
    cin>>n>>x;
    a.resize(n);

    rep(i,n){
        ll cn;  cin>>cn;
        rep(j,cn){ll num; cin>>num;a[i].push_back(num);}
    }
    dfs(0,1);
    cout<<ans<<endl;
    return 0;

}