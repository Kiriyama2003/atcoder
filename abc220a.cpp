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
    int a,b,c;  cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c == 0){cout<<i<<endl; return 0;}
    }
    cout<<-1<<endl;


    return 0;
}