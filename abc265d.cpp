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
int main(){
    ll n,p,q,r; cin>>n>>p>>q>>r;
    set<ll> s={0};
    ll crruent=0;
    rep(i,n){
       ll a;    cin>>a;
       s.insert(crruent+=a);
    }
    for(auto x:s){
        if((s.find(x+p) != s.end()) && (s.find(x+p+q)!=s.end()) && (s.find(x+p+q+r)!=s.end())){
			cout<<"Yes"<<endl;
			return 0;
		}
    }
    cout<<"No"<<endl;
    return 0;
}