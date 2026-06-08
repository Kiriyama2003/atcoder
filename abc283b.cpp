#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;              cin>>n;
    vector<ll>A(n);     rep(i,n) cin>>A[i];
    int Q;              cin>>Q;
    for(int i=0;i<Q;i++){
        int num,k;  cin>>num>>k;
        ll x;
        if(num==1) cin>>x;

        if(num==1)  A[k-1]=x;
        else        cout<<A[k-1]<<endl;
    }
    return 0;
}