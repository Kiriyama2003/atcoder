#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,t;
vector<vector<bool>> a;
vector<int> longest_path;

void dfs(int v,vector<int>& walk,vector<vector<bool>>& a){
    if(v==t) {
        if(walk.size()>longest_path.size()){
            longest_path=walk;
        }
        return ;
    }else{
        rep(i,n){
            if(!a[v][i]) continue;
            
            walk.push_back(i);
            a[v][i]=false; a[i][v]=false;
            dfs(i,walk,a);
            walk.pop_back();
            if(!(i==s || v==s)) {a[v][i]=true; a[i][v]=true;}
            
        }
    }
}

int main(void){
    cin>>n>>s>>t; s--; t--;
    a.resize(n,vector<bool>(n,false));

    int v,vv;
    rep(i,n){
        cin>>v;
        rep(j,v) {
            cin>>vv;    vv--;   
            if(vv==s) continue;
            else a[i][vv]=true;
        }
    }
    

    vector<int> tmp={s};
    dfs(s,tmp,a);

    

    rep(i,longest_path.size()){
        cout<<longest_path[i]+1<<(i!=longest_path.size()-1?" ":"\n");
    }
    
    return 0;
}