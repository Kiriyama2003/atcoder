#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll a,b;   cin>>a>>b;

    for(int i=1;i<=18;i++){
        if(a%10 + b%10 >=10){cout<<"Hard"<<endl; return 0;}
        a/=10;b/=10;
    }
    cout<<"Easy"<<endl;
    

    return 0;

}