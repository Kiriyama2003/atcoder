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

    string s;   cin>>s;
    reverse(all(s));
    int ans=-1;
    rep(i,s.size()){
        if(s[i]=='a') {ans=s.size()-(i); break;}
    }
    cout<<ans<<endl;
    return 0;
}