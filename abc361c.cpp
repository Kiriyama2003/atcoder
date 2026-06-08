#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;    cin>>n>>k;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];
    sort(A.begin(),A.end());
    ll ans=2e9;  //2×10^9

    for(int i=0;i<=k;i++){
        ans=min(ans,(   A[i+(n-k)-1]    -A[i]));
    }

    cout<<ans<<endl;



    return 0;
}