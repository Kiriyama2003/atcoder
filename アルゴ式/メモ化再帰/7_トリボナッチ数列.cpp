#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
map<ll,ll> mp;

ll func(int n){
    if(mp.count(n)) return mp[n];
    if(n<3) return mp[n]=1;
    
    return mp[n]=(((func(n-1))+(func(n-2)))%1000000+func(n-3))%1000000;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;

    cout<<func(n)<<endl;
    return 0;
}