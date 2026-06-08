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

    int wa=0,ac=1e9+1;
    while(wa+1 != ac){
        int wj=(wa+ac)/2;
        int na=0,nb=0;
        rep(i,n) if(a[i]<=wj) na++;
        rep(i,m) if(b[i]>=wj) nb++;
        if(na>=nb) ac=wj;
        else wa=wj;
    }
    cout<<ac<<endl;
    return 0;
}