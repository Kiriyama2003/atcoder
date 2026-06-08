#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;  cin>>n;
    vector<ll> coin(3);
    rep(i,3) cin>>coin[i];

    sort(all(coin));
    /* 違うみたい
    

    int ans=0;
    rep(i,3){
        ans += (n/coin[i]);
        cout<<ans<<'\n';
        n %=coin[i];
    }
    cout<<ans<<'\n';
    */

   set<int> st;
   for(int i=0;i<10000;i++){
    for(int j=0;j<10000;j++){
        
        ll tmp = coin[0]*i + coin[1]*j;

        if(tmp > n) continue;
        if(((n-tmp)%coin[2]) == 0){
            
            st.insert(i+j+((n-tmp)/coin[2]));
        }
        
    }
   }
    cout<<*begin(st)<<'\n';
    return 0;  
}