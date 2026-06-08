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
    int person,time;    cin>>person>>time;
    int pre=0;
    
    rep(i,person){
        int t;  cin>>t;
        int ans=max(pre,t)+time;
        cout<<ans<<endl;
        pre=ans;
    }

    return 0;
}