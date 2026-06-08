#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll n,q; string s;

int main(){
    cin>>n>>q>>s;
    vector<ll> a(q),b(q),c(q),d(q);
    rep(i,q) cin>>a[i]>>b[i]>>c[i]>>d[i];

    

    rep(i,q){
        ll hash1=hash_value(a[i],b[i]);
        ll hash2=hash_value(c[i],d[i]);
        if(hash1==hash2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}