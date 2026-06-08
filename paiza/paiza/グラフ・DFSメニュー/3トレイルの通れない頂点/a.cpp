
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,k;
vector<vector<bool>> a;

void dfs(int v,vector<int>& walk,int k){
    if(k==0){
        rep(j,walk.size()) 
        cout<<walk[j]+1<<(j!=walk.size()-1?" ":"\n");
        exit(0);
    }
    else{
        rep(i,n){
            if(i==v) continue;
            if(!a[v][i]) continue;
            else{
                walk.push_back(i);
                a[v][i]=false; a[i][v]=false;
                dfs(i,walk,k-1);
                walk.pop_back();
                a[v][i]=true; a[i][v]=true;
            }
        }
    }
}

int main(void){
    cin>>n>>s>>k; s--;
    a.resize(n);

    
    rep(i,n)rep(j,n) {
        if(i==j) a[i].push_back(false);
        else a[i].push_back(true);
    }

    vector<int> tmp={s};
    dfs(s,tmp,k);
    

    
    
    return 0;
}