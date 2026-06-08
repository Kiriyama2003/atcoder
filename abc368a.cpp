#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    vector<int> a(n),b;
    rep(i,n) cin>>a[i];

    rep(i,m) {
        b.push_back(a.back());
        a.pop_back();
    }
    reverse(all(b));

    for(auto bb:b) cout<<bb<<" ";
    for(auto aa:a) cout<<aa<<" ";
    cout<<endl;


    return 0;
}