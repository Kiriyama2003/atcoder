#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll a,b; cin>>a>>b;
       
        // bが存在しない場合、aをセット
        if (mp.find(b) == mp.end()) {
            mp[b] = a; 
        } else {     // bが存在する場合、小さい方を選択
            mp[b] = min(mp[b], a);
        }
    }

    ll max_value=0;
    for(auto d:mp){
        max_value=max(max_value,d.second);
    }
    cout<<max_value<<endl;
    return 0;
}