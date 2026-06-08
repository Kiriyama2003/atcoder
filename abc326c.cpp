#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll n,m;     cin>>n>>m;

    vector<ll>A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    sort(A.begin(),A.end());

    
    int res=0;
    for(int i=0;i<n;i++){
        ll x=A[i];
        //int it=lower_bound(A.begin(),A.end(),x+m) - A.begin();
        int it=upper_bound(A.begin(),A.end(),x+m-1) - A.begin();
        res=max(res,it-i);
    }

    cout<<res<<endl;
    return 0;
}