#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){

    //計算量O(N+M)=O(10^5)
    int n,m; cin>>n>>m;

    vector<int> a(n),b(m);
    rep(i,n) cin>>a[i]; sort(all(a));
    rep(i,m) cin>>b[i]; sort(all(b));

    vector<pair<int,int>> events;
    rep(i,n) events.push_back({a[i],0});
    rep(i,m) events.push_back({b[i]+1,1});

    sort(all(events));
    int na=0,nb=m;
    for(auto [price,type]:events){
        if(type==0) na++;
        else nb--;

        if(na>=nb) {cout<<price<<endl; return 0;}
    }
    return 0;
}