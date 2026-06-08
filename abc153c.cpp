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
    ll H,ans=0;   cin>>H;

    
    auto f=[&](ll h,auto& self)->ll{
        if(h==1) return 1;
        else{
            return 2*self(h/2,self)+1;
        }
    };
    cout<<f(H,f)<<'\n';
    return 0;
}