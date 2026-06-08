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
//AC
//Fenwick
int main() {
    int N,M;    cin>>N>>M;
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    vector<ll> S(N+1, 0);
    rep(i,N) S[i+1] = (S[i] + A[i]) % M;

    /*
    vector<int> st;
    for(int i=0;i<=N;i++) st.push_back(S[i]);
    sort(all(st));

    ll cnt=0;

    st.erase(st.begin());
    for(int i=1;i<=N;i++){
        auto it = lower_bound(all(st),S[i]);
        cnt += it -st.begin();
        st.erase(it);
    }

    //累積和の計算の際に, l > rになる回数 * M をansに足せばいいけど, 
    //この回数の求め方が分からない*/

    fenwick_tree<ll> fw(M);
    //実際入力される値は, 0~M-1

    ll ans = 0;
    for(int i=0;i<N;i++){
        ans += (i+1) * (ll)S[i+1];
        ans -= (N-i) * (ll)S[i];
        fw.add(S[i],1);
        ans += fw.sum(S[i]+1,M)*M;
    }
    ans += fw.sum(S[N]+1,M)*M;
    
    //ans += cnt * M;
    cout<<ans<<endl;
    return 0;
}
