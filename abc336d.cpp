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
	int n;	cin>>n;
	vector<int> a(n);

	rep(i,n) cin>>a[i];
	//最初と後ろに, 0を追加
	a.push_back(0);	a.insert(a.begin(), 0);
	n += 2;	//2要素追加したから, それ

	vector<int> dl(n,0), dr(n,0);
	for(int i=1;i<=n-1;i++){
		dl[i] = min(dl[i-1]+1, a[i]);
	}

	for(int i=n-2;i>=0;i--) {
		dr[i] = min(dr[i+1]+1, a[i]);
	}

	int ans = 0;
	rep(i,n){
		int now = min(dl[i],dr[i]);	ans = max(ans, now);
	}
	cout<<ans<<endl;
	return 0;
}
