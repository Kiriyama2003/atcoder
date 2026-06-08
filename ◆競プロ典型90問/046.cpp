#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> a(46,0),b(46,0),c(46,0);

    rep(i,n){
        int num;    cin>>num;
        a[num%46]++;
    }
    rep(i,n){
        int num;    cin>>num;
        b[num%46]++;
    }
    rep(i,n){
        int num;    cin>>num;
        c[num%46]++;
    }

    ll ans=0;
    rep(i,46) rep(j,46) rep(k,46){
        if(((i+j+k) %46) == 0){
            ans += (ll)a[i]*(ll)b[j]*(ll)c[k];
        }
    }
    cout<<ans<<'\n';
    return 0;  
}