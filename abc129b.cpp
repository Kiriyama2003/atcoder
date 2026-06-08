#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //n個の重り ある区切りで2つに分けた　min(abs(それぞれの合計の差))を出力
    int n;  cin>>n;
    vector<int> w(n);
    rep(i,n) cin>>w[i];

    vector<int> b(n+1);
    b[0]=0;
    for(int i=1;i<=n;i++) b[i]=b[i-1]+w[i-1];

    int ans=100000000;
    rep(i,n-1){
        ans=min(ans, abs((b[n]-b[i+1])-b[i+1]));
    }
    cout<<ans<<endl;
}