#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
int main(){
    int n;  cin>>n;
    vector<pair<int,int>> up,down;
    rep(i,n){
        int a,b;    cin>>a>>b;
        if(a<=b){
            down.emplace_back(make_pair(a,b));
        }else{
            up.emplace_back(make_pair(b,a));
        }
    }
    sort(all(up),[&](int i,int j){
        if(up[i].first==up[j].first) return up[i].second>=up[j].second;
        else return up[i].first>=up[j].first;
    });
    sort(all(down));

    ll now=0,max_x=0;
    rep(i,down.size()){
        now+=down[i].first;
        max_x=max(max_x,now);
        now-=down[i].second;
    }
    rep(i,up.size()){
        now+=up[i].second;
        max_x=max(max_x,now);
        now-=up[i].first;
    }
    cout<<max_x<<endl;
    return 0;
}
