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
    ll n,m; cin>>n>>m;
    n++;

    mint ans;
    rep(i,60){  //i桁目について
        if( (m>>i) & 1 ) { //mのi桁目　0だったら, 当然やらない
            //周期
            ll p = (ll)2<<i; // 1<<i=2^i 2<<i=2* 2^i
            //i=0なら, p=2

            //周期からはみ出た個数
            ll r = n%p;

            ans += (n-r)/2; //(n-r):=はみ出してない個数
            //周期のきれいなところ

            //周期は, [0..][1..]とくるから, はみ出ているのが[0...]の範囲だったら, ans+=しない
            //r- ( (ll)1<<i )　が正なら足す
            //負なら何もしない
            if (r - ((ll)1<<i) >= 0  ) ans += r- ( (ll)1<<i );
        }
    }
    cout<<ans.val()<<endl;
    return 0;
}