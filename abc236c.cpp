#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;    cin>>n>>m;

    vector<string> s(n+1);
    REP(i,n) cin>>s[i];
    set<string> st;
    rep(i,m) {string tmp;cin>>tmp; st.insert(tmp);}

    REP(i,n){
        if(st.find(s[i])!=st.end()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
