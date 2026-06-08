#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define mod 998244353
#define inv2 499122177
int main(){
    ll t;   cin>>t;
    rep(i,t){
        ll a,s; cin>>a>>s;
        string ans="No";
        if(2*a <= s){
            ll differ=s -2*a;
            if((differ & a) == 0) ans="Yes";
        }
        cout<<ans<<endl;
    }
    

    
    return 0;
}