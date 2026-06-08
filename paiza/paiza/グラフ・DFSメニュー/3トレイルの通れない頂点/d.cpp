#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,t,p;
vector<vector<bool>> a;
pair<vector<int>,int> longest_path;

void dfs(int v,vector<int>& walk,vector<vector<bool>>& a){
    

    if(v==t) {
        if(count(all(walk),p)>longest_path.second){
            longest_path.first=walk;
            longest_path.second=count(all(walk),p);
        }
    }

    rep(i,n){
        if(!a[v][i]) continue;
        
        walk.push_back(i);
        a[v][i]=false; a[i][v]=false;
        dfs(i,walk,a);
        walk.pop_back();
        a[v][i]=true; a[i][v]=true;
        
    }
    
}

int main(void){
    cin>>n>>s>>t>>p; s--; t--; p--;
    a.resize(n,vector<bool>(n,false));

    int v,vv;
    rep(i,n){
        cin>>v;
        rep(j,v){ cin>>vv; vv--; a[i][vv]=true;}
    }
    

    vector<int> tmp={s};
    dfs(s,tmp,a);

    if(longest_path.second==0) cout<<-1<<endl;
    else{   
        rep(i,longest_path.first.size()){
            cout<<longest_path.first[i]+1<<(i!=longest_path.first.size()-1?" ":"\n");
        }
    }
    
    return 0;
}