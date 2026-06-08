#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n,x,y;  cin>>n>>x>>y;
    vector<ll> a(n);
    vector<ll> b(n);
    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());

    ll sum=0;
    ll x_min,y_min;
    rep(i,n) {
        sum+=a[i];
        if(sum>x){
            x_min=i;
            break;
        }
        if(i==n-1) x_min=n-1;
    }
    sum=0;
    rep(i,n) {
        sum+=b[i];
        if(sum>y){
            y_min=i;
            break;
        }
        if(i==n-1) y_min=n-1;
    }
    cout<<min(x_min,y_min)+1<<endl;



    return 0;
}