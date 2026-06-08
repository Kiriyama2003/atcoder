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
    int n;  cin>>n;
    vector<int> a(n),b(n),c(n);
    rep(i,n) cin>>a[i]>>b[i]>>c[i];

    vector<vector<int>> dp(n,vector<int>(3,-2e6));
    //dp[i][j] i日目にjをしたときの, 幸福の最大値
    dp[0][0]=a[0]; dp[0][1]=b[0]; dp[0][2]=c[0];

    for(int i=1;i<n;i++){
        dp[i][0]=max(dp[i-1][1]+a[i], dp[i-1][2]+a[i]);
        
        dp[i][1]=max(dp[i-1][0]+b[i], dp[i-1][2]+b[i]);
        
        dp[i][2]=max(dp[i-1][0]+c[i], dp[i-1][1]+c[i]);
    }
    cout<<max({dp[n-1][0], dp[n-1][1], dp[n-1][2]})<<endl;
    return 0;
}