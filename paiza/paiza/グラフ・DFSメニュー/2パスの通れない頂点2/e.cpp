#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,t,p;
vector<vector<int>> a;
vector<vector<int>> ans;
vector<bool> check;

void dfs(int v,vector<int>& walk,vector<bool>& check1){
    if(walk.back()==t) {
        bool re=0;
        rep(i,walk.size()){
            if(walk[i]==p) re=true;
        } 
        if(re) ans.push_back(walk); 
    }
    else{
        rep(i,a[v].size()){
            if(! check1[a[v][i]]) continue;
            else{
                walk.push_back(a[v][i]);
                check1[a[v][i]] = false;
                dfs(a[v][i],walk,check1);
                walk.pop_back();
                check1[a[v][i]] = true;
            }

        }
    }
}

int main(void){
    cin>>n>>s>>t>>p;   s--; t--; p--;
    a.resize(n);
    check.resize(n,true);
    rep(i,n){
        int v;      cin>>v;     a[i].resize(v);
        rep(j,v){ cin>>a[i][j]; a[i][j]--;}
    }

    vector<int> tmp={s};    check[s]=false;
    dfs(s,tmp,check);
    
    cout<<ans.size()<<endl;
    rep(i,ans.size()){
        rep(j,ans[i].size()) cout<<ans[i][j]+1<<(j!=ans[i].size()-1?" ":"\n");
    }
    return 0;
}