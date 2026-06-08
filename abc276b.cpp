#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<int>P(n);
    rep(i,n) cin>>P[i];
    int j=n-2;
    while(P[j]<P[j+1]){
        j--;
    }
    //j=5 (3)
    int k=n-1;  //一番右

    while(P[j]<P[k]){
        k--;
    }
    //k=7 (2)
    swap(P[j], P[k]);
    reverse(P.begin() + (j + 1),  P.end());
    
    

    for(auto x:P) cout<<x<<" ";
    cout<<endl;
    return 0;
}