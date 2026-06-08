#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector<int> s(n+1,0);
    rep(i,n) s[i+1] = s[i] ^ a[i];

    
    ll ans = 0;
    rep(k,30) {
        //k桁目について
        int one = 0;    //k桁目の個数

        //累積和の各数について, つまり[0]から[n]まで
        rep(i, (n+1) ) if ( (s[i]>>k) & 1) one++;


        ans += one * ll( (n+1) -one) * (1<<k);
    }

    rep(i,n) ans -=a[i];

    cout<<ans<<endl;
    return 0;
}