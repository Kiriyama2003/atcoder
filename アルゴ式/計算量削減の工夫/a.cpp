#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の数字が入力される
    //任意の2つの数の差, これの最大値を
    int n;   cin>>n;
    ll Min=2e9,Max=-1;
    rep(i,n){
        ll num; cin>>num;
        Min=min(Min,num);
        Max=max(Max,num);
    }
    cout<<Max-Min<<endl;
    return 0;
}