#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int h,w,max_steps=0;
vector<vector<char>> c;
vector<vector<char>> ;
void dfs(int x,int y,int cnt){
    max_steps=max(cnt,max_steps);
    if(y+1<=h-1 && c[y+1][x]=='.') dfs(x,y+1,cnt+1);
    if(x+1<=w-1 && c[y][x+1]=='.') dfs(x+1,y,cnt+1);
}
//TLE
int main() {
    cin>>h>>w;
    c.resize(h,vector<char>(w));
    rep(i,h) rep(j,w) cin>>c[i][j];

    int x=0,y=0;
    dfs(x,y,1);
    cout<<max_steps<<endl;
}