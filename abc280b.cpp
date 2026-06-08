#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //n個の重り
    int n;  cin>>n;
    vector<int> s(n);
    rep(i,n) cin>>s[i];

    
    cout<<s[0]<<" ";
    rep(i,n-1) cout<<s[i+1]-s[i]<<" ";
    return 0;

    
}
