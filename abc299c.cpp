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


    int n,cnt=0,ans=-1;  string s; cin>>n>>s;

    rep(i,n){
        if(s[i]=='o') cnt++;
        else {
            if(cnt>0) ans=max(ans,cnt);
            cnt=0;
        }
    }

    //最後の文字について
    if(cnt>0){
        if(n != cnt) ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}