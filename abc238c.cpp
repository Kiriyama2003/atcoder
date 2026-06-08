#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define mod 998244353
#define inv2 499122177
ll triangular(ll x){
    //1+2+ ... + x = ?

    x%=mod;
    ll res=x;   res%=mod;
    res*=(x+1); res%=mod;
    
    //2で割る　等価　inv2を掛ける
    res*=inv2;  res%=mod;
    return res;
}
int main(){
    ll n,res=0,p10=10;  cin>>n;

    for(int dg=1;dg<=18;dg++){

        //dg=3のとき, f(100)~f(999)の和について
                    //f(100)~f(273 )
        //p10/10={1,2,3, ... ,17}
        
        //min(10^6, 999) = 999
        ll r=min(n,p10-1);      //各桁について, 1+2+ ... + min(n,p10-1)

        //10 <= 999     r-l+1 = 999 - 10 +1 =900 
        //よって, 1+2+ ... + 900の和を足す
        if(p10/10 <= r){res += triangular(r-(p10/10)+1); res%=mod;}
        p10 *=10;
    }

    cout<<res<<endl;
    return 0;
}