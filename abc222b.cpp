#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,p;  cin>>n>>p;
    
    int cnt=0;
    rep(i,n){
        int a;  cin>>a;
        if(a < p) ++cnt;
    }
    cout<<cnt<<endl;
    return 0;
}