#include<bits/stdc++.h>
using namespace std;
#include<utility>
#include<set>
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int h,w,ans;
vector<vector<int>>a;
set<int>s;
void dfs(int i,int j){
    if(s.count(a[i][j])) return;
    
    if(i==h-1 && j==w-1) {
        ans++;
        return;
    }
    s.insert(a[i][j]);
    if(j+1<w) dfs(i,j+1); //右へ
    if(i+1<h) dfs(i+1,j);
    s.erase(a[i][j]);
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    cin>>h>>w;
    a= vector<vector<int>>(h,vector<int>(w));
    rep(i,h) rep(j,w) cin>>a[i][j];


    dfs(0,0);

    cout<<ans<<endl;
    return 0;
}