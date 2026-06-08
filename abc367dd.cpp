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

  vector<int> r={0};
  for(int i=0;i<2*n;i++) r.push_back((r.back()+a[i%n])%m);

  //for(auto aa:r){cout<<aa<<" ";}  cout<<endl;

  vector<int> b(m,0);

  for(int i=0;i<n;i++) b[r[i]]++;
  //for(auto aa:b){cout<<aa<<" ";}  cout<<endl;

  ll res=0;
  for(int i=n;i<2*n;i++){
    b[r[i-n]]--;
    res+=b[r[i]];
    b[r[i]]++;
  }
  cout<<res<<endl;
  return 0;
}
