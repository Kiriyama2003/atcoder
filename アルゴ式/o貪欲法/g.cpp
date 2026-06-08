#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //文字列s 文字数n
    //文字列t 文字数m
    //tがsの部分列か　Yes/No

    int n,m;  cin>>n>>m;
    string s,t; cin>>s>>t;

    int now=0;
    rep(i,n){
        if(now == (m-1)) break;
        if(s[i]==t[now]) now++;
    }

    if(now == m-1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    return 0;
}