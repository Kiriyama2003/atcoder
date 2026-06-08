#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    vector<string>s(10);
    rep(i,10) cin>>s[i];
    pair<int,int>st,en;
    bool ch=1;
    rep(i,10){
        rep(j,s[0].size()){
            if(ch) if(s[i][j]=='#') {ch=0;st={i,j};}
            if(s[i][j]=='#') en={i,j};
        }
    }
    cout<<st.first+1<<" "<<en.first+1<<endl;
    cout<<st.second+1<<" "<<en.second+1<<endl;
    return 0;
}