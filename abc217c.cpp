#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> ans(n+1);
    rep(i,n){
        int num;    cin>>num;
        ans[num]=i+1;
    }
    REP(i,n) cout<<ans[i]<<" ";
    return 0;
}