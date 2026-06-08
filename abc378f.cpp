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
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main() {
    int n;  cin>>n;
    //vector graph(n,vector<int>());
    vector<ll> u(n-1,0),v(n-1,0),zisu(n,0);
    rep(i,n-1){
        cin>>u[i]>>v[i];    u[i]--,v[i]--;
        zisu[u[i]] += 1;
        zisu[v[i]] += 1;
    }

    dsu d(n);
    vector<ll> c2(n,0);

    rep(i,n-1){
        //次数3の頂点を繋げる
        if(zisu[u[i]] == zisu[v[i]] && zisu[v[i]]== 3) d.merge(u[i],v[i]);

        //u[i]に繋がる
        else if(zisu[u[i]] == 3 && zisu[v[i]] == 2) ++c2[u[i]];

        //v[i]に繋がっている
        else if(zisu[u[i]] == 2 && zisu[v[i]] == 3) ++c2[v[i]];
    }

    ll ans = 0;
    for(auto g : d.groups()){
        //連結成分ごとに2と繋がっている個数
        //閉路はないから、同じ2と繋がっていることは絶対ない
        ll c = 0;
        for(auto v : g) c += c2[v];

        //2と繋がっている個数から2個選んだ時の、ペアの個数
        ans += c*(c-1)/2;
    }

    cout<<ans<<endl;
    /*for(auto i:zisu) cout<<i<<" ";
    cout<<endl;
    for(auto i:c2) cout<<i<<" ";
    cout<<endl;*/

    
    return 0;
}
