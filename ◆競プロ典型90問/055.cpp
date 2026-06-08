#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N,P,Q;  cin>>N>>P>>Q;
    vector<ll> a(N);
    rep(i,N) cin>>a[i];

    ll cnt=0;
    //全探索
    rep(i,N){
        rep(j,i){
            rep(k,j){
                rep(l,k){
                    rep(m,l){
                        if(1LL*a[i]*a[j]%P*a[k]%P*a[l]%P*a[m]%P==Q) cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt<<"\n";

    
    
    return 0;  
}