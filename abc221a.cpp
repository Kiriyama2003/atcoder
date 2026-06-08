#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int a,b;    cin>>a>>b;

    //解法1_ok
    /*ll ans=1;
    rep(i,a-b) ans*=32;
    cout<<ans<<endl;*/

    //解法2_ok
    cout<<(ll)pow(32,a-b)<<endl;
    return 0;
}