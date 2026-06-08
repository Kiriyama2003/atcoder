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
    int n;  cin>>n;
    int a=n/16;
    int b=n%16;
    if(a<=9) cout<<a;
    else cout<<(char)('A'+a-10);

    if(b<=9) cout<<b;
    else cout<<(char)('A'+b-10);
    return 0;
}