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
    int n,d;    cin>>n>>d;
    //仕事がn個ある
    //今日からd日間

    //x[i] i日目から　y[i]：i
    vector<vector<ll>> g(d);
    //g[i] i日目から始まる仕事の給料リスト
    rep(i,n){
        ll x,y; cin>>x>>y;  x--;
        g[x].push_back(y);
    }
    priority_queue<ll> q;
    ll answer=0;
    rep(i,d){
        for(ll j:g[i]) q.push(j);
        if(!q.empty()){
            answer+=q.top();
            q.pop();
        }
    }
    cout<<answer<<endl;

    return 0;
}