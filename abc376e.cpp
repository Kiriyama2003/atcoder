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
void chmin(int& a,int b){a=min(a,b);}

void solve() {
  int n,k;  cin>>n>>k;
  vector<P> ab(n);
  rep(i,n) cin>>ab[i].first;    //O(N)
  rep(i,n) cin>>ab[i].second;   //O(N)
  sort(all(ab));                //O(N log N)

  ll ans = 1e18;

  ll sum = 0;
  priority_queue<int> q;
  for(auto [a,b] : ab) {    //O(N)
    if (q.size() == k-1) ans = min(ans, (sum+b)*a);

    sum += b; q.push(b);
    if(q.size() == k) sum-=q.top(), q.pop();    //O(log N)
  }

  cout<<ans<<endl;
}


int main(void){
    int t;  cin>>t;
    rep(ti,t) solve();
    return 0;
}