#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int main(){
    int n;  cin>>n;
    ll nowx=0,nowy=0;
    long double ans=0;
    ll x,y; 
    rep(i,n){
        cin>>x>>y;
        ans += sqrt((nowx-x)*(nowx-x) + (nowy-y)*(nowy-y));
        nowx=x; nowy=y;
    }
    ans += sqrt((nowx-0)*(nowx-0) + (nowy-0)*(nowy-0));
    cout<<fixed<<setprecision(15)<<ans<<endl;

    return 0;
}