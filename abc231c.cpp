#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,q;    cin>>n>>q;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    sort(all(a));

    rep(i,q){
        ll x;   cin>>x;
        auto itr=lower_bound(all(a),x);
        cout<<a.end()-itr<<endl;
    }




    return 0;
}