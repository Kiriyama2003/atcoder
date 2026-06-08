#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n,m; cin>>n>>m;
  dsu uf(n);
  int x=0;
  rep(i,m) {
    int a,c; char b,d;  cin>>a>>b>>c>>d;    a--; c--;
    if (uf.same(a,c)) x++;  //1チームで1回しか行われない
    else uf.merge(a,c);
  }

  //n-mは, n>=mより, 必ず非負
  cout<<x<<" "<<uf.groups().size()-x<<endl;
  //n-mでよい　n個の連結成分(n個の頂点)　から1本線を引くと 連結成分が1つ減る
  //環状成分できるときも-1すると, 環状連結されたものがひかれるから
  //n-mは, 環状連結でない連結成分の個数となる　　
  return 0;
}