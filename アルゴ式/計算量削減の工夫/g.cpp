#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の整数A0,A1,...,A_N-1
    //クエリQ個
    //非負整数l,r  0<=l<r <=N
    //出力　A_l + ... + A_r-1

    int n;   cin>>n;
    vector<ll> a(n+1);
    REP(i,n){
        cin>>a[i];  a[i]+=a[i-1];
    } 



    int q;  cin>>q;
    vector<ll> ans;
    rep(i,q){
        int l,r;    cin>>l>>r;
        ans.push_back(a[r]-a[l]);
    }
    for(auto v:ans) cout<<v<<endl;
    return 0;
}