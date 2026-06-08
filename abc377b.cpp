#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
	vector<string> s(8);
    rep(i,8) cin>>s[i];
    //. #　から成る

    set<int> ii,jj;
    rep(i,8) rep(j,8){
        if(s[i][j]=='#'){
            ii.insert(i);
            jj.insert(j);
        }
    }
    int ans=0;
    rep(i,8) rep(j,8){
        if(!ii.count(i) && !jj.count(j)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}