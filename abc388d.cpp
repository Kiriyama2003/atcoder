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

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//いつかのコピペ

int main(){
    int N;  cin>>N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];

    vector<ll> B(N, 0LL);
    ordered_multiset<ll> ost;

    rep(i,N){
        ll count_ge_i = (ll)ost.size() - ost.order_of_key((ll)i);
        B[i] = A[i] + i + count_ge_i;
        ost.insert(B[i]);
    }


    rep(i,N){
        ll ans = max(0LL, B[i] - (ll)(N - 1));
        cout<<ans<<(i+1 < N ?" ":"\n");
    }
    return 0;
}
