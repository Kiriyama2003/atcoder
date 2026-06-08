#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ll x;  cin>>x;
    if(x>=0) cout<<x/10<<endl;
    else {
        if(x%10==0) cout<<x/10<<endl;
        else cout<<(x/10)-1<<endl;
    }
    return 0;
}
