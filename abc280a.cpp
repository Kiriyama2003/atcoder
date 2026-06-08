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
    int h,w;    cin>>h>>w;
    ll cnt=0;
    rep(i,h){
        string s;   cin>>s;
        rep(j,w) if(s[j]=='#') cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}