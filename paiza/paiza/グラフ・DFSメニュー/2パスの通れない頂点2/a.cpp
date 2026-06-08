#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,k;
vector<vector<int>> a;
vector<vector<int>> ans;

void dfs(int v,vector<int>& walk,int k){
    if(k==0) ans.push_back(walk); 
    else{
        rep(i,a[v-1].size()){
            walk.push_back(a[v-1][i]);
            dfs(a[v-1][i],walk,k-1);
            walk.pop_back();
        }
    }
}

int main(void){
    cin>>n>>s>>k;
    a.resize(n);
    rep(i,n){
        int v;      cin>>v;     a[i].resize(v);
        rep(j,v) cin>>a[i][j];
    }

    vector<int> tmp={s};
    dfs(s,tmp,k);

    cout<<ans.size()<<endl;
    rep(i,ans.size()){
        rep(j,ans[i].size()) cout<<ans[i][j]<<(j!=ans[i].size()-1?" ":"\n");
    }
    return 0;
}