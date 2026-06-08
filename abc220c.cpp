#include<bits/stdc++.h>
using namespace std;

using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
int main(){
    int n;  cin>>n;
    ll x,total=0;

    vector<ll> a(n);
    rep(i,n){cin>>a[i]; total+=a[i];}
    cin>>x;


    ll ans= (x/total) *n;
    x-= (x/total) * total;

    
    ll now=0;
    while(x>=0){
        //if(now==n-1) now=0;
        ans++;
        x-=a[now];
        now++;
    }
    
    cout<<ans<<endl;
    return 0;
}