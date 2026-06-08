#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,k;     cin>>n>>k;

    vector<vector<int>> b(k);
    vector<ll> a(n);
    rep(i,n) {
        cin>>a[i];
        b[i%k].push_back(a[i]);
    }
    sort(all(a));
    rep(i,k) sort(rall(b[i]));
    //for(auto v:b){ for(auto vv:v) cout<<vv<<" "; cout<<endl;}

    

    vector<ll> cur;
	rep(i,n){
		cur.push_back(b[i%k].back());
		b[i%k].pop_back();
	}

    cout<<((a==cur)?"Yes":"No")<<endl;

    
    return 0;
}
