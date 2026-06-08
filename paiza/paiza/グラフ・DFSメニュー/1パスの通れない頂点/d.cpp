#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n,s,t;  
vector<vector<int>> g;
vector<bool> check;
vector<vector<int>> ans;


void dfs(int pos,vector<int>& path){
    check[pos]=false;
    for(int i=0;i<g[pos].size();i++){
        int next=g[pos][i];
        if(check[next]) {
            path.push_back(next);
            if(next==t) ans.push_back(path);
            else dfs(next,path);
            path.pop_back();
        }
    }
    check[pos]=true;
}


int main(void){
    cin>>n>>s>>t;
    g.resize(n+1);  check.resize(n+1,true);
    REP(i,n){
        int num;    cin>>num;
        rep(j,num){int a; cin>>a; g[i].push_back(a);}
    }

    vector<int> p={s};  dfs(s,p);
    

    //ans={ {}, {}, {}} どの{}が正解か？
    int mi=1e6,ind=-1; 
    for(int i=0;i<(int)ans.size();i++){
        if(mi> ans[i].size()){mi=ans[i].size(); ind=i;}
    }
    
    //答えは, ans[ind]である
    for(int i=0;i<mi;i++) cout<<ans[ind][i]<<(i!=mi-1?" ":"");

    

    return 0;
}