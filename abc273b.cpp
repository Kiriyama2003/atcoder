#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll x;   int k;  cin>>x>>k;
    ll pow10=1;
    rep(i,k){
       x/=pow10;
       ll m= x%10;
       if(m<=4) x-=   m;
       else x+= (10-m);
       x*=pow10;
       pow10 *=10;
    }
    cout<<x<<endl;
    return 0;
}