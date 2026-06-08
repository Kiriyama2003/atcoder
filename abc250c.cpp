#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,q;  cin>>n>>q;

  vector<int> x(q),val(n+1);
  rep(i,q) cin>>x[i];               //入力
  for(int i=1;i<=n;i++) val[i]=i;   //1~nを格納


  rep(i,q){
    for(int j=1;j<=n;j++){
        if(val[j]==x[i]){
            if(j!=n) swap(val[j],val[j+1]);
            else swap(val[j],val[j-1]);
            break; 
        }
    }
  }
  for(int i=1;i<=n;i++) cout<<val[i]<<(i!=n?" ":"\n");
  return 0;
}
