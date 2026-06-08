#include <bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ダメ
    ll n,x;     cin>>n>>x;
    string s;   cin>>s;

    rep(i,n){
        if(s[i]=='U') x/=2;
        else if(s[i]=='R'){ x*=2;x++;}
        else x*=2;
    }
    cout<<x<<endl;
    return 0;

}