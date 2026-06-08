#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
using mint = modint1000000007;
int main(){
    int n,l,k;    cin>>n>>l>>k;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];

    auto solve=[&](ll mid)->bool{
        ll cnt=0,pre=0;
        rep(i,n){
            if(A[i]-pre >= mid and l-A[i] >= mid){
                ++cnt, pre=A[i];
            }
        }
        if(cnt >= k) return true;
        else return false;
    };

    ll left=1,right=l+1;
    while(left+1 != right){
        ll mid = (left+right)/2;
        if(!solve(mid)) right = mid;
        else left = mid;
    }
    cout<<left<<'\n';
    return 0;
}