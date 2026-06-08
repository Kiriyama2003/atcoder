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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}

//AC
//orderd_mulisetを使って, ある数以上の要素数を取得する
//O(N log2 N)
int main() {
    int N,M;    cin>>N>>M;
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    vector<ll> S(N+1, 0);
    rep(i,N) S[i+1] = (S[i] + A[i]) % M;

   ll ans = 0;
   ordered_multiset<ll> san;
    for(int i=0;i<N;i++){
        ans += (i+1) * (ll)S[i+1];
        ans -= (N-i) * (ll)S[i];
        san.insert(S[i]);
        ans += ((int)san.size() - san.order_of_key(S[i]+1))*M;
    }
    ans += ((int)san.size() - san.order_of_key(S[N]+1))*M;
 
    cout<<ans<<endl;
    return 0;
}