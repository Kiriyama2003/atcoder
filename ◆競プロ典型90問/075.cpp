#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
int main(){
    ll n;   cin>>n;
    const ll N=n;
    vector<ll> p;
    for(ll i=2;i*i<=N;i++){
        while(n%i == 0){
            n /= i;
            p.push_back(i);
        }
    }
    if(n != 1LL) p.push_back(n);

    rep(i,21){
        if((1<<i) >= (int)p.size()){cout<<i<<'\n';break;}
    }

    return 0;  
}