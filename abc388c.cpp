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
int main(void){
	//int n,m; cin>>n>>m;
	//string s;  cin>>s;
	int n;  cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    ll ans=0;
    sort(all(a));
    rep(i,n){
        auto it = upper_bound(all(a),a[i]/2) - a.begin();
        ans +=it;
    }
    cout<<ans<<endl;
	return 0;
}