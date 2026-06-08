#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
using mint = modint1000000007;
int main(){
    ll L,R; cin>>L>>R;
    mint ans = 0;
    for(int i=1;i<=18;i++){
        ll il = max((ll)pow(10,i-1),L);
        ll ir = min((ll)powl(10,i)-1,R);

        //cout<<i<<' '<<il<<' '<<ir<<'\n';

        if(!(il <= ir)) continue;


        ans += (mint(ir)*(mint(ir)+1))/2 *i;
        //cout<<ans.val()<<'\n';
        //if(il != (ll)powl(10,i-1))
        ans -= (mint(il)-1)*(mint(il))/2 *i;
        //cout<<ans.val()<<'\n';
    }
 
    if(R == (ll)1e18) ans += 19*mint(1000000000000000000LL);
    cout<<ans.val()<<'\n';
    

    return 0;

}