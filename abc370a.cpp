#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a,b; cin>>a>>b;
    if(a==1 && b==0) cout<<"Yes"<<endl;
    else if(a==0 && b==1) cout<<"No"<<endl;
    else cout<<"Invalid"<<endl;
   
    return 0;
}