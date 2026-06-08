#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    const int M=1e8;
    int n;  cin>>n;
    vector<int>a(n);    rep(i,n) cin>>a[i];
    sort(all(a));

    ll ans=0;
    rep(i,n) ans+=(ll)a[i]*(n-1);
    //この(ll)つけないと　WA

    int r=n-1;
    ll cnt=0;   //1e8を超える回数
    //しゃくとり法
    rep(i,n){
        while(r>=0 && a[i]+a[r]>=M) r--;
        if(r>i) cnt += n-(r+1);
        else cnt+= n-(i+1);
        //全ての自分以降を除外する　n-(i+1)
        //i+1の+1の理由は　0indexだから
    }
    ans -=(ll) cnt*M;

    cout<<ans<<endl;
    return 0;
}