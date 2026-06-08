#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    int n;  ll a,b;     string s;   cin>>n>>a>>b>>s;
    ll ans=1ll<<60;
    /*
    rep(i,n){
        ll tmp=a*i;
        string t=s;
        rotate(t.begin(), t.begin()+i, t.end());
        for(int l=0,r=n-1;l<r ;l++,r--){
            if(t[l]!=t[r]) tmp+=b;
        }
        ans=min(ans,tmp);
    }*/

    s+=s;
    for(int i = 0; i < n; i++) {
        long long tmp=a*i;
        for(int j = 0; j < n / 2; j++) {
            int l = i         +j;
            int r = i + (n-1) -j;
            if(s[l] != s[r]) tmp += b;
        }
        ans = min(ans, tmp);
    }

    cout<<ans<<endl;

    return 0;
}