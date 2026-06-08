#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int q;  cin>>q;

    vector<long long> type_2;
    vector<pair<long long,long long>> vec;
    while(q--){
        int q;  cin>>q;
        if(q==1){
            ll x,c; cin>>x>>c;
            vec.push_back(make_pair(x,c));
        }else{
            ll c;   cin>>c; type_2.push_back(c);
        }
    }

    int idx=0;
    for(auto &c:type_2){
        ll ans=0;
        while(c){
            if(vec[idx].second==0) idx++; //ボールが無くなったらindexを進める
            else{
                ll take=min(c,vec[idx].second); //取れるボールの個数
                ans += take *(vec[idx].first);
                c-=take;    //c-=cで0になる可能性
                vec[idx].second-=take;
            }
        }
        cout << ans << endl;
    }

    return 0;
}