#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define mod 998244353
#define inv2 499122177
int main(){
    ll n;   cin>>n;
    ll nn=(ll)1<<31;
    //ll nn=1<<31;　だと1がintとして計算される
    if((-nn)<=n && n <nn) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

    
    return 0;
}