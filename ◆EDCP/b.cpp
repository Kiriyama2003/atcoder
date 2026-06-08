#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
const long long INF = 1LL<<60;
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k;  cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector<ll> dp(n,INF);
    dp[0]=0;

    //ジャンプ距離を固定して, 頂点を動かしていくのだとダメ
    //for(int i=1;i<n;i++) dp[i]=dp[i-1]+abs(a[i]-a[i-1]);

    /*for(int i=1;i<=k;i++){
        //iは, ジャンプの距離 2~n-1
        for(int j=i;j<n;j++){
            //jは, ジャンプ先
            //chmin(dp[j],dp[j-i]+abs(a[j]-a[j-i]));
            dp[j]=min(dp[j],dp[j-i]+abs(a[j]-a[j-i]));
        }
        for(auto v:dp) cout<<v<<" "; cout<<endl;
  
    }*/
    for (int i=1;i<n;i++) {
        //足場iヘ
        for(int j=1;j<= k && i-j >= 0;j++) {
            //j個前の足場から
            if(i-j < 0) break;
            chmin(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
        }
    }
    cout<<dp[n-1]<<endl;

    return 0;
}