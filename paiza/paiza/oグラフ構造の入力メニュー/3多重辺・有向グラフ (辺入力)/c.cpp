#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;    cin>>n;
    vector<vector<int>> s(n,vector<int>(n));
    rep(i,n) rep(j,n) cin>>s[i][j];

    vector<int> ans;

    rep(i,n){
        if(s[i][i]==1) ans.push_back(i+1);
    }
    cout<<(int)ans.size()<<endl;
    for(auto v:ans) cout<<v<<endl;

    return 0;
}