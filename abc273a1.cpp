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
    
    auto f=[&](auto self,int n)->int{
        return (n==0)?1:n*self(self,n-1);
    };
    
    cout<<f(f,n)<<endl;
    return 0;
}