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
    int komozi=0,oomozi=0;
    rep(i,s.size()){
        if((s[i]-'a')>=0&(s[i]-'a')<27) komozi++;
        else oomozi++;
    }

    if(komozi<oomozi)   for(auto& c:s) if(islower(c)) c=toupper(c);
    else                for(auto& c:s) if(isupper(c)) c=tolower(c);
    cout<<s<<endl;
    return 0;
}