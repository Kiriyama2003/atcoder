#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()


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
            int m = pow_mod(2,k, (int)vs.size());

            rep(j,(int)vs.size())
                ans[vs[j]] 
                    = vs[(j+m) % (int)vs.size()];
        }

    rep(i,n) cout<<ans[i]+1<<' ';
    cout<<endl;
    return 0;
}