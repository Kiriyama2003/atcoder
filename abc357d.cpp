#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
using mint = modint998244353;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;   cin>>n;
    //正整数n V_N:=nをn個繋げた整数
    //V_Nを出力せよ

    mint r=1;   //等比rは, 1のままではない
    {
        ll _n=n;    
        while(_n){ //_nが0になるまで
            r*=10;
            _n /=10;
        }
        //nが一桁なら, rは10 なぜなら, 11111にするには, 等比r=10だから
    }
    //mint s=(r.pow(n)-1)/(r- 1); //等比数列の総和
    //mint s=(r.pow(n)-1) * (mint)(r-1).pow(998244353-2);
    mint s=(r.pow(n)-1) * (mint)(r-1).inv();
    //総和= a(r^(n) -1)/(r-1)  初項a=1

    //s= 001 001 001　みたい

    s*=n;   //nを掛ける
    cout<<s.val()<<endl;
    return 0;
}