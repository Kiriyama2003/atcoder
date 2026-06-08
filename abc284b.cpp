#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t;cin>>t;
    rep(i,t){
        int a;cin>>a;
        int odd_cot=0;
        rep(j,a){
            ll num;cin>>num;
            if(num%2!=0) odd_cot++;

        }
        cout<<odd_cot<<endl;
    }
    return 0;
}