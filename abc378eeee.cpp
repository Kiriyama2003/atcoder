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
ll op(ll a,ll b){return a+b;}
ll e(){return (ll)0;}
int main() {
    int N,M;    cin>>N>>M;
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    vector<ll> S(N+1, 0);
    rep(i,N) S[i+1] = (S[i] + A[i]) % M;

   ll ans = 0;
   
   segtree<ll, op,e> seg(M);
   
    for(int i=0;i<N;i++){
        ans += (i+1) * (ll)S[i+1];
        ans -= (N-i) * (ll)S[i];

        seg.set(S[i],seg.get(S[i])+1);

        ans += seg.prod(S[i]+1,M) *M;
    }

    ans += seg.prod(S[N]+1,M) *M;
 
    cout<<ans<<endl;
    return 0;
}