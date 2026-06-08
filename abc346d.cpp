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
int main(){
    int n;  cin>>n;
    string s;   cin>>s; //0,1から成る文字列
    vector<ll> c(n);
    rep(i,n) cin>>c[i];
    rep(i,n){
        if(i%2==1) s[i] ^= '1' ^ '0';
        //反転するだけ  
        //まずは, 010101010について
    }

    ll ans = 1e18;
    rep(bi,2) {
        vector<ll> l(n+1), r(n+1);
        //左からのコスト　右からのコスト

        //左から
        rep(i,n) {
            l[i+1] = l[i];
            if(s[i] == '1') l[i+1] += c[i];
        }

        //右から
        for(int i = n-1; i >= 0; i--) {
            r[i] = r[i+1];
            if (s[i] == '0') r[i] += c[i];
        }

        //境界となる[]は,  1 ~ n-1
        for(int i=1;i<n;i++) ans=min(ans, l[i]+r[i]);
        
        //全体を反転させる
        //2回目は, 101010101について
        rep(i,n) s[i] ^= '0'^'1';
    }

    cout<<ans<<endl;
    return 0;
}