#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a,b;    cin>>a>>b;
    if(a-b == 0) cout<<1<<endl;
    else if((a-b)%2 ==0) cout<<3<<endl;
    else cout<<2<<endl;

    return 0;
}