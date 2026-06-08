#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n; cin>>n;
    vector<int> a(n);
    ll sum=0;
    rep(i,n){
        cin>>a[i]; sum+=a[i];
    }

    sort(all(a));

    vector<int> b(n,sum/n);
    for(int i=0;i<sum%n;i++) b[n-1-i]++;


    ll ans=0;
    rep(i,n) ans+=abs(a[i]-b[i]);
    cout<<ans/2<<endl;
    
    return 0;
}