#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

int main(){
    ll a,b,c;   cin>>a>>b>>c;
    //ll min_num=min({a,b,c});
    ll common=__gcd(a,b);
    common=__gcd(common,c);
    ll ans=(a/common)-1;
    ans += (b/common)-1;
    ans += (c/common)-1;
    cout<<ans<<"\n";
    

    
    return 0;  
}