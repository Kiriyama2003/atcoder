#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll a,b,c;   cin>>a>>b>>c;

    /*long double left=log2(a);
    long double right=b*log2(c);
    cout<<(left<right?"Yes\n":"No\n");*/

    ll left=1;
    rep(i,b) left*=c;
    cout<<(a<left?"Yes\n":"No\n");

    return 0;  
}