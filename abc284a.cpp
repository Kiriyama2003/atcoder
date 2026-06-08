#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;      cin>>n;
    vector<string>s(n);
    rep(i,n) cin>>s[i];
    reverse(ALL(s));
    for(auto ss:s)  cout<<ss<<endl;
    return 0;
}