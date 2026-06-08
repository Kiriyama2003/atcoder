#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll n,m;   cin>>n>>m;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    ll s=accumulate(a.begin(),a.end(),0LL);
    if(s<=m){cout<<"infinite"<<endl; return 0;}

    auto check=[&](ll x)->bool{
        ll sum=0;
        rep(i,n) sum+=min(a[i],x);
        if(sum<=m) return 1;
        else return 0;
    };

    //ac=*min_element(all(a))だと, WAとTLE
    //wa=2e9でもいい
    ll ac=0,wa=*max_element(all(a)),mid;
    while(ac+1!=wa){
        mid=(ac+wa)/2;
        if(check(mid)) ac=mid;
        else wa=mid;
    }
    cout<<ac<<endl;
    return 0;
}

