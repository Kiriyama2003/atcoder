#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

map<string,string> mp;
vector<bool> arrived;
bool dfs(int next){
    if(arrived[next]) return false;

}


int main() {
    int n;  cin>>n;
    arrived.resize(n);
    rep(i,n){
        string s,t;    cin>>s>>t; mp[s]=t;
    }
    if(dfs())


    

    return 0;
}
