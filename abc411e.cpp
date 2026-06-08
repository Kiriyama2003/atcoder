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

using mint = modint998244353;


int main(void){
	int N;    cin>>N;
    mint ans = 0;
    vector<ll> A(N*6);
    rep(i,N) rep(j,6) cin>>A[i*6+j];

    rep(i,N) rep(j,6) ans += A[i*6+j];

    
    ans /= (6);
    cout<<ans.val()<<endl;


	return 0;
}