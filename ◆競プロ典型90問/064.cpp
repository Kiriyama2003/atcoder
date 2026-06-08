#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
ll binpower(ll a,ll b){
    int ans=1;
    while(b!=0){
        if(b%2==1) ans = ans*a%mod;
        a = a*a%mod;
        b /=2;
    }
    return ans;
}
int main(){
    ll n,k; cin>>n>>k;

    if(k==1) cout<<(n==1?1:0)<<'\n';
    else if(n==1) cout<<k%mod<<'\n';
    else if(n==2) cout<<k*(k-1)%mod<<'\n';
    else{
        cout<<(k*(k-1)%mod)*binpower(k-2,n-2)%mod<<'\n';
    }


    return 0;  
}