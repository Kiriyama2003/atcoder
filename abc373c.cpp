#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;    cin>>n;
    ll a_m=-1e11,b_m=-1e11;
    rep(i,n) {
        ll  num;    cin>>num;
        a_m=max(a_m,num);
    }
     rep(i,n) {
        ll  num;    cin>>num;
        b_m=max(b_m,num);
    }
    cout<<a_m+b_m<<endl;
    return 0;
}