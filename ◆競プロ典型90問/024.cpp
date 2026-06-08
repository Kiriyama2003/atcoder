#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n,k;    cin>>n>>k;
    vector<ll> a(n),b(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];

    
    ll cnt=0;
    rep(i,n){
        cnt += abs(a[i]-b[i]);
    }

    if(cnt>k){
        cout<<"No\n";
    //k >= cnt
    }else if((k-cnt)%2==0){
        cout<<"Yes\n";
    }else cout<<"No\n";

    return 0;  
}