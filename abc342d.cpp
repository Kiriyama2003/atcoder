#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using mint = modint998244353;
int main(void){
	int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    ll ans = 0;
    vector<int> c(200010, 0);
    for(int x : a) {
        int y = x, i = 2;
        while(i*i <= y) {
            while(y % (i*i) == 0) y /= (i * i);            
            ++i;
        }
        ans += c[y];    //自身より前の数について
        c[y]++;         //自身より後の数のために
    }
    cout << ans + (ll)(c[0]) * (n - c[0]) << endl;
    return 0;

	return 0;
}
