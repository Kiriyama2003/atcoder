#include<bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll gcd(ll x,ll y){if (y==0) return x; return gcd(y, x % y);}//最大公約数
ll lcm(ll x,ll y){return x/gcd(x, y)*y;}   //最小公倍数
using mint = modint998244353;
int main(){
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    //数列の長さが1になるまで
        //操作F：左端2つを削除し, 左端に(x+y)%10を挿入
        //操作G：　　　　　　　 , 左端に(x*y)%10を挿入 

    vector<mint> dp(10);

    dp[a[0]]=1;


    for(int i=1;i<n;i++){
        for(auto v:dp) cout<<v.val()<<" ";
        cout<<endl;
        vector<mint> p(10);
        swap(p,dp);
        


        rep(j,10){
            dp[(j+ a[i] )%10] += p[j];
            dp[(j* a[i] )%10] += p[j];
        }

    }

    rep(i,10) cout<<dp[i].val()<<" ";

    return 0;
}