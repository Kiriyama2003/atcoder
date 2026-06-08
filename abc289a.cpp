#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;   cin>>s;
    rep(i,s.size()){
        if(s[i]=='0') s[i]='1';
        else s[i]='0';
    }
    cout<<s<<endl;
    return 0;
}