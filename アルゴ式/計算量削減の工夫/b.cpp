#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の数字が入力される
    //任意の1つ以外の総和　その最大値
    int n;   cin>>n;
    ll Min=2e9;
    ll sum=0;
    rep(i,n){
        ll num; cin>>num;
        Min=min(Min,num);
        sum+=num;
    }
    cout<<sum-Min<<endl;
    return 0;
}