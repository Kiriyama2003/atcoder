#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s,t; cin>>s>>t;
    if(s.size() > t.size()) {cout<<"No"<<endl;return 0;}
    bool check=1;
    rep(i,s.size()){
        if(s[i]!=t[i]) check=0;
    }
    cout<<(check?"Yes":"No")<<endl;
    return 0;
}