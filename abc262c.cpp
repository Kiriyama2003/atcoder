#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
/*ll nck(int n){
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    ll x=1,z=1;
    for(int i=n;i>0;i--)   x*=i;        //n!
    for (int i=(n-2);i>0;i--) z*=i;     //k!
    //cout<<x<<" "<<y<<" "<<z<<endl;
    return (x/(2*z));
}*/
int main(){
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    //m：(添え字)と(値)が同じ
    //match：a[i]=i' a[i']=iであるとき
    ll n,m=0,match=0;  cin>>n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        if(i==a[i]) m++;
    } 


    for(ll i=1;i<=n;i++){
        if(i==a[a[i]]) match++;
    }
    //mC2=(m*(m-1)/2)
    cout<<((match-m)/2)+(m*(m-1)/2)<<endl;

    return 0;
}