#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;
    vector<int>a(m);
    rep(i,m) cin>>a[i];
    for(int i=1;i<=n;i++){
        int day=*lower_bound(ALL(a),i);
        cout<<day-i<<endl;
    }
    return 0;
}