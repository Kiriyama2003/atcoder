#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
  int n,m;  cin>>n>>m;
  vector<int> a(n);
  rep(i,n) cin>>a[i];

  vector<ll> s(n+1);    s[0]=0;
  rep(i,n) s[i+1]=(s[i] + a[i])%m;
  //累積和

  ll L=s[n];    //前部の合計

    ll ans=0;
  vector<int> cnt(m);
  rep(r,n){
    ans += cnt[s[r]];   //跨がない

    //追加する
    ans += cnt[( (s[r]+m) - L )%m];   //跨ぐ場合 +mは, マイナスになるから

    cnt[s[r]]++;
  }
  cout<<ans<<endl;
  return 0;
}
