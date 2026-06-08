#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //int n;    cin>>n;
    //string s; cin>>s;
    vector<string> s(12);
    rep(i,12)cin>>s[i];
    int ans=0;
    for(int i=0;i<12;i++){
        if((int)s[i].size()==(i+1)) ans++;
    }    
    cout<<ans<<endl;
    return 0;
}