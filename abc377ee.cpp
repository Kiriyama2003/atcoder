#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//二乗累乗法 O(log2 k)
int powmod(ll x, ll k, int mod) {
  if(k == 0) return 1%mod;
  else{
    ll res = powmod(x,k/2,mod);
    res = (res*res)%mod;

    //kが奇数ならプラスで×2を1回行う
    if(k%2 == 1) res = (res*x)%mod;

    return res;
  }
  
}

int main() {
	int n;  ll k;   cin>>n>>k;
    vector<int> p(n);
    rep(i,n) cin>>p[i], p[i]--;

    vector<int> ans(n);
    vector<bool> used(n);

    rep(i,n) 
        if(!used[i]) {

            //dsu使わずに実装した場合
            int v = i;
            vector<int> vs;
            while(!used[v]) {
                used[v] = true;
                vs.push_back(v);
                v = p[v];
            }


            //s^k mod size
            int m = powmod(2,k, (int)vs.size());

            rep(j,(int)vs.size())
                ans[vs[j]] 
                    = vs[(j+m) % (int)vs.size()];
        }

    rep(i,n) cout<<ans[i]+1<<' ';
    cout<<endl;
    return 0;
}