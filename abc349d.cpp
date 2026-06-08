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
    ll l,r; cin>>l>>r;
    vector<pair<ll,ll>> ans;
    while(l<r){
        for(int i=60;i>=0;i--){
            ll w=(ll)1 << i;
            if( !(l%w == 0) ) continue;   //０なら通過
            //lはwの倍数でないなら, スキップ
            //最終的にw=1となるから, 最後は通過できる

            if(l+w > r) continue;   //rを含んではいけない

            ans.emplace_back(l,l+w);
            l+=w;   break;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [l,r]:ans) cout<<l<<" "<<r<<endl;
    return 0;
}