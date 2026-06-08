#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//c.cppをメモ化して, 計算量を超短くしたもの

vector<ll> memo;
ll func(int n){
    if(memo[n]!=-1) return memo[n];
    if(n==0) return memo[n]=0;
    if(n==1) return memo[n]=1;
    return memo[n]=func(n-1)+func(n-2);
}
int main() {
    ll n;   cin>>n;
    memo.resize(n+1,-1);
    cout<<func(n)<<endl;
    
    return 0;
}
