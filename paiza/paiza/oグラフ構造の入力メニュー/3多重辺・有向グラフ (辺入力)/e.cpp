#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<vector<bool>> s(n+1,vector<bool>(n+1,false));
    rep(i,m){
        int a,b;    cin>>a>>b;      s[a][b]=true;
    }

    vector<int> ans;

    REP(i,n) if(s[i][i]) ans.push_back(i);
    cout<<(int)ans.size()<<endl;
    for(auto v:ans) cout<<v<<endl;

    return 0;
}