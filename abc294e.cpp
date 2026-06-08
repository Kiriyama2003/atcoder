#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll l;  vector<ll> n(2); cin>>l>>n[0]>>n[1];

    vector<pair<ll,pair<ll,ll>>> events;    //(時,(行,値))
    

    for(ll i=0;i<2;i++){
        ll t=0;
        rep(j,n[i]){
            ll val,len; cin>>val>>len;
            events.emplace_back(t,make_pair(i,val));
            t+=len;
        }
    }
    sort(all(events));
    events.emplace_back(l,make_pair(0,0));
    //for(auto [a,b]:events){cout<<a<<" ( "<<b.first<<" 行, 値 "<<b.second<<" )"<<endl;}


    vector<int> val(2);
    ll pretime=0,ans=0;
    for(auto [t,p]:events){
        //前回のを比較する
        if(val[0]==val[1]) ans+= (t-pretime);
        //preとtが一致するとは, 同じところで数字が変わっている

        
        val[p.first]=p.second;  //値を更新する
        pretime=t;              //時間を更新する
    }

    cout<<ans<<endl;
    return 0;
}