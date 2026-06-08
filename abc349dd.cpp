#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll Left,Right; cin>>Left>>Right;
    vector<pair<ll,ll>> ans;
    
    auto f=[&](auto f,ll l,ll r)->void{
        if(Left <= l && r<=Right) {  // left l r Rightならば
            ans.emplace_back(l,r); return;
        }

        ll c=(l+r)/2;
        if(Left < c) f(f,l,c); //l-rの中心のcの左側に, Left-Rightある
        if(c < Right) f(f,c,r); //l-rの中心のcの右側に, Left-Rightがある
    };

    f(f,0,(ll)1<<60);

    cout<<ans.size()<<endl;
    for(auto [l,r]:ans) cout<<l<<" "<<r<<endl;
    return 0;
}