#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,m;   cin>>n>>m;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    ll s= accumulate(a.begin(),a.end() , 0LL);
    if(s<=m){ cout<<"infinite"<<endl; return 0;}




    return 0;
}