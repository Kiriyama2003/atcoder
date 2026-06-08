#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
int main() {
    int n;  cin>>n;
    vector<int> k(n);
    rep(i,n) cin>>k[i];
    ll ans=1e15;
    for(int i=0;i<(1<<n);i++){
        ll a=0,b=0;
        rep(j,n){
            if(i>>j & 1) a+=k[j];
            else b+=k[j];
        }
        if(a>b) ans=min(ans,a);
        else ans=min(ans,b);
    }
    cout<<ans<<endl;

    return 0;
}