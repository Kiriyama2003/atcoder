#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int main(){
    int n;  string s;   cin>>n>>s;
    int ans=0;
    for(int i=0;i<=((int)s.size()-3);i++){
        if(s[i]=='#' and s[i+2]=='#' and s[i+1]=='.') ans++;
    }
    cout<<ans<<endl;


    return 0;
}