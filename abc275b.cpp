#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    ll a,b,c,d,e,f,x,y,ans;
    cin>>a>>b>>c>>d>>e>>f;
    //cout<<(a*b*c-d*e*f)%998244353<<endl;
    x=((a%mod)*(b%mod))%mod;
    x=(x*(c%mod))%mod;
    y=((d%mod)*(e%mod))%mod;
    y=(y*(f%mod))%mod;
    //x<yの時　(x-y)が負になる
    ans=(x+mod-y)%mod;
    cout<<ans<<endl;

    return 0;
}