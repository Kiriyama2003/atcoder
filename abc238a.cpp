#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;  cin>>n;
    //if((1<<n) > n*n) cout<<"Yes"<<endl;
    //else cout<<"No"<<endl;

    //ll a=1;
    //rep(i,n) a*=2;
    //if(a > n*n)  cout<<"Yes"<<endl;
    //else cout<<"No"<<endl;

    if(n==2 | n==3 || n==4) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}