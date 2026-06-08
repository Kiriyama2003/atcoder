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
    int n; cin>>n;
    vector<int>h(n);
    rep(i,n) cin>>h[i];
    for(int i=1;i<n;i++){
        if(h[0]<h[i]) {cout<<i+1<<endl; return 0;}
    }
    cout<<-1<<endl;

    return 0;
}