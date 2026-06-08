#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;  cin>>n;
    map<string,int> s;
    rep(i,n){ string tmp; cin>>tmp; s[tmp]++; }
    
    int mx=-1;  string ans;
    for(auto [v,vv]:s) if(mx<vv){ mx=vv; ans=v;}
    cout<<ans<<endl;


    return 0;
}