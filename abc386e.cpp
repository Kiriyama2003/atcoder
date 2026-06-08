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
    int N,K;    cin>>N>>K;
    vector<ll> A(N);
    rep(i,N) cin>>A[i];


    ll arrX = 0;
    rep(i,N) arrX ^= A[i];

    int r = ((K <= N/2) ? K : N-K);

    vector<int> idx(r);
    iota(all(idx), 0);  // 0,1,2,...,r-1

    ll ans = 0;

    while(true){
        ll x = 0;
        rep(i,r) x ^= A[ idx[i] ];
        
        ll candidate = (r == K ? x : (arrX ^ x));
        ans = max(ans, candidate);

        bool canMove = false;
        for(int i = r - 1; i >= 0; i--){
            if(idx[i] < N - (r - i)){
                idx[i]++;
                for(int j = i+1; j < r; j++) idx[j] = idx[j-1] + 1;
                canMove = true;
                break;
            }
        }
        if(!canMove) break;
    }
    cout<<ans<<"\n";
    return 0;
}