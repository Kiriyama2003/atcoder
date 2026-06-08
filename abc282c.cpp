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
    int n;  string s;   cin>>n>>s;  bool st=false;
    rep(i,n){
        if(s[i]=='\"') st=!st;
        else if(st==0){
            if(s[i]==',') s[i]='.';
        }
    }
    cout<<s<<endl;
    return 0
}