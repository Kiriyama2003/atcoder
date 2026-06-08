#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int h,w,m;  cin>>h>>w>>m;
    vector<int> t(m), a(m), x(m);
    rep(i,m) cin >> t[i] >> a[i] >> x[i];

    int rh = h, rw = w;
    map<int,ll> cnt;    //色, その色で塗られているマス数
    vector<bool> usedh(h),usedw(w);
    for(int i = m-1; i >= 0; i--) {
        a[i]--;
        if(t[i] == 1) {
            if(usedh[a[i]]) continue;
            else{
                usedh[a[i]] = true;
                cnt[x[i]] += rw;
                rh--;
            }
        }else {
            if (usedw[a[i]]) continue;
            else{
                usedw[a[i]] = true;
                cnt[x[i]] += rh;
                rw--;
            }
        }
    }
    cnt[0] += (ll)rh*rw;

    vector<pair<int,ll>> ans;
    for(auto p : cnt){
        if(p.second != 0) ans.emplace_back(p);
    }
    cout<<ans.size()<<endl;

    for(auto [c,x] : ans) cout<<c<<' '<<x<<endl;
    cout<<endl;
}