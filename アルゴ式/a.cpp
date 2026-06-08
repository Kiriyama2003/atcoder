#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
//ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
int main(){
    cout<<gcd(-1,2)<<endl;
    cout<<gcd(0,3)<<endl;
    cout<<gcd(0,-3)<<endl;
    cout<<gcd(-4,-6)<<endl;
    return 0;
}
