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
    int a,b;cin>>a>>b;
    if(a==b){cout<<-1<<endl; return 0;}
    if(a==1&&b==2){cout<<3<<endl; return 0;}
    if(a==3&&b==2){cout<<1<<endl; return 0;}
    if(a==1&&b==3){cout<<2<<endl; return 0;}
    if(a==2&&b==1){cout<<3<<endl; return 0;}
    if(a==2&&b==3){cout<<1<<endl; return 0;}
    if(a==3&&b==1){cout<<2<<endl; return 0;}
    return 0;
}