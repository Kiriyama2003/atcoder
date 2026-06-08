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
    //非負整数k
    //出力　A0+A1+ ... + A_k-1
    //k==1 出力A_0
    //k==0 出力0 

    int n;   cin>>n;
    vector<ll> a(n+1);
    REP(i,n){
        cin>>a[i];  a[i]+=a[i-1];
    } 



    int q;  cin>>q;
    vector<ll> ans;
    rep(i,q){
        int num;    cin>>num;
        ans.push_back(a[num]);
    }
    for(auto v:ans) cout<<v<<endl;
    return 0;
}