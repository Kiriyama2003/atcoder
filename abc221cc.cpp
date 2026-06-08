#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    string N;   cin>>N;
    sort(rall(N));  //降順に注意
    ll ans=0;
    int n=N.size();
    for (int i = 0; i < (1 << n); ++i) {
        ll l=0,r=0;
        for(int j=0;j<n;++j) {
            if (i & (1<<j)) {
                l=l*10+ (N[j]-'0');
            }else{
                r=r*10+ (N[j]-'0');
            }
        }
        ans=max(ans,l*r);
    }
    cout<<ans<<endl;
    return 0;
}