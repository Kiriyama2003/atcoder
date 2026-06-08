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
    int n,m;    cin>>n>>m;
    vector<int>A(n);
    vector<int>B(m);
    rep(i,n) cin>>A[i];
    rep(i,m) cin>>B[i];

    vector<int>C(n+m);
    merge(all(A),all(B),C.begin()); //O(n+m)
    //begin(C) = back_inserter(V)
    //mergeで勝手にソートされる

    for(auto a:A){
        cout<<lower_bound(all(C), a)- C.begin() +1<<" ";
    }
    cout<<endl;

    for(auto b:B){
        cout<<lower_bound(all(C), b)- C.begin() +1<<" ";
    }
    cout<<endl;
    return 0;
}