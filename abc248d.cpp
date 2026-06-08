#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#include <atcoder/all>
using namespace atcoder;
using mint = atcoder::modint998244353;
int main(){
    int n,Q;  cin>>n;
    vector<vector<int>> idx(n+1);
    rep(i,n){
        int a;cin>>a;
        idx[a].push_back(i);
    }


    cin>>Q;
    rep(i,Q){
        int L,R,X;  cin>>L>>R>>X; L--,R--;
        //cout<<lower_bound(all(idx[X]),(R)+1)-lower_bound(all(idx[X]),L)<<endl;

        cout<<upper_bound(all(idx[X]),(R))-lower_bound(all(idx[X]),L)<<endl;
    }


    return 0;
}