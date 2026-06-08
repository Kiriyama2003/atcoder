#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<pair<ll,ll>> vec(n);
    rep(i,n) cin>>vec[i].first>>vec[i].second;

    vector<pair<ll,ll>> ans;

    rep(i,n){
        rep(j,n){
            if(i==j) continue;
                ans.push_back({vec[i].first-vec[j].first,vec[i].second-vec[j].second});
        }
    }
    ll cnt=0;
    rep(i,ans.size()){
        rep(j,ans.size()){
            if(i==j) continue;
            if(ans[i].first%ans[j].first == 0 && ans[i].second%ans[j].second == 0) cnt++;
        }
    }
    cout<<ans.size()-cnt<<endl;
    return 0;
}