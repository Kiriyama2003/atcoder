#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//ダブリングで実装を試みているけど, できていない
//ダブリングではできないらしい

int main() {
	ll n,k; cin>>n>>k;
    vector<ll> p(n+1);
    REP(i,n) cin>>p[i];

    vector pp(61,vector<ll>(n+1,0));
    REP(i,n) pp[0][i] = p[p[i]];
    

    for(int i=1;i<61;i++){
        REP(j,n){
            pp[i][j] = pp[i-1][pp[i-1][j]];
        }
    }
    REP(i,n) cout<<pp[1][p[i]]<<" ";
    cout<<endl;


    vector<ll> ans(n+1);
    REP(i,n) ans[i]=p[i];

    for(ll i = 60;i>=0;i--){
        ll num = 1LL<<i;
        vector<ll> tmp(n+1);
        tmp = ans;

        if(k >= num){
            REP(j,n) ans[j] = pp[i][ tmp[j] ];

            k -= num;

            cout<<"!!"<<i<<":";
            REP(i,n) cout<<ans[i]<<" ";
            cout<<endl;
        }
    }

    REP(i,n) cout<<ans[i]<<" ";
    cout<<endl;

	return 0;
}