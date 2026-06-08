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
    int r1,r2,b1,b2;    cin>>r1>>r2>>b1>>b2;
    vector<bool>red(101,false);
    vector<bool>blue(101,false);
    bool check=0;
    rep(i,101){
        if(r1==i || r2==i) check=!check;
        if(check) red[i]=1;
    }
    check=0;
    rep(i,101){
        if(b1==i || b2==i) check=!check;
        if(check) blue[i]=1;
    }
    int ans=0;
    rep(i,101){
        if(red[i]==1 && blue[i]==1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}