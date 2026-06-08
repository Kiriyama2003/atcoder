#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod = 1000000007;
int main(){
    int n;  cin>>n;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];

    vector<ll> B(2*n);
    rep(i,n) B[i+1] = B[i] + A[i];
    rep(i,n) B[i+n+1]= B[i+n]+ A[i];

    if(B[n] % 10LL != 0LL){
        cout<<"No"<<'\n';
        return 0;
    }

    rep(i,n){
        ll goal = B[i] + (B[n]/10LL);

        auto itr=lower_bound(all(B),goal);
        if(*itr == goal) {
            cout<<"Yes"<<'\n';
            return 0;
        }
    }
    cout<<"No"<<'\n';
    return 0;  
}