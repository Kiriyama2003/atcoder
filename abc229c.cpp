#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll n,w;   cin>>n>>w;
    //n種類のチーズ
    //重さw[g]以下
    //a ig当たりのおいしさ
    //b 存在する重さ

    vector<pair<ll,ll>> a(n);
    rep(i,n) cin>>a[i].first>>a[i].second;
    
    /*解法1 自力
    sort(all(a)); //後ろに, おいしさが高いのがある, 後ろからいく

    ll ans=0;
    while(w>0 && !a.empty()){
        if(w<a.back().second){ ans+=w*a.back().first; w=0;}
        else {
            ans+= a.back().first*a.back().second;
            w-=a.back().second;
            a.pop_back();
        }
    }
    cout<<ans<<endl;*/

    //解法2
    sort(rall(a));
    ll ans=0;
    for(auto [v,vv]:a){
        ans+=v * min(w,vv);
        w-=min(w,vv);
        //wは0になるから, それ以降では, なにも変化しない
    }
    cout<<ans<<endl;
    

    return 0;

}