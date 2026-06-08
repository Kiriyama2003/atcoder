#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll a,b,k,cnt=0;   cin>>a>>b>>k;
    while(a < b){ cnt++;  a*=k;}
    cout<<cnt<<endl;
    return 0;
}