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
void chmin(ll& a,ll b){a=min(a,b);}
const ll INF = 1e18;
int main(){
    ll n;  cin>>n;

    /*解法1
    ll num=1;
    rep(i,70){
        if((ll)1<<i > n){cout<<(i-1)<<endl;return 0;}
    }*/

   ll val=1;
   for(ll i=1;i<=60;i++){
    if(val>n){cout<<i-1<<endl;return 0;}
    val*=2;
   }

   //解法2 floror(x)：x以下で最大の整数値
   cout<<floor(log2((long double)n))<<endl;
    return 0;
}