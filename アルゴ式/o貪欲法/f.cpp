#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    int now=0;

    ll ans=0;
    rep(i,n-1){
        if(a[i]+now > a[i+1]){
            now=a[i]+now - a[i+1];
            ans+=now;
        }
        else now =0;
    }
    cout<<ans<<endl;
    
    return 0;
}