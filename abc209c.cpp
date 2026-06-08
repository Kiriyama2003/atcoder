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
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
const int mod = 1000000007;
int main() {
    int n;  cin>>n;
    vector<int> c(n);
    rep(i,n) cin>>c[i];

    sort(all(c));
    int ans = 1;
    rep(i,n) {
        ans = ((ll)ans * max(c[i]-i, 0)) % mod;
    }
    cout << ans << endl;
    return 0;
}