#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<pair<ll,ll>> v(n);
    rep(i,n) cin>>v[i].first>>v[i].second;
    
    
    // 区間を左端でソートする
    sort(v.begin(), v.end());
    
    // 区間の左端の座標たち
    vector<long long> lefts;
    rep(i,v.size()) lefts.push_back(v[i].first);
 
    // 各区間について処理していく
    long long res = 0;
    rep(i,v.size()){
        //i= [0] ~ [n-1]
        int j = upper_bound(all(lefts), v[i].second) - (lefts.begin()+i) - 1;
        res += j;
    }
    cout << res << endl;
}