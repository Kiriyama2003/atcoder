#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
using P = pair<ll, ll>;
int main() {
    ll N,M,Sx,Sy;   cin>>N>>M>>Sx>>Sy;
    map<ll,vector<ll>> houses;
    rep(i,N){
        ll aa,bb;   cin>>aa>>bb;
        houses[aa].push_back(bb);
    }
    


    vector<pair<char, ll>> moves(M);
    rep(i,M) cin>>moves[i].first>>moves[i].second;

    set<pair<ll, ll>> visited;
    ll x = Sx, y = Sy,cnt=0;

    for(auto [dir, dist] : moves) {
        ll nx = x, ny = y;
        if(dir == 'U') ny += dist;
        if(dir == 'D') ny -= dist;
        if(dir == 'L') nx -= dist;
        if(dir == 'R') nx += dist;

        mp[]
        x = nx;
        y = ny;
    }

    cout<<x<<" "<<y<<" "<<cnt<<"\n";
    return 0;
}