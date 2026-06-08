#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}

int h,w,k,ans=0;
vector<string> s;
vector<vector<bool>> visited;
void dfs(int i,int j,int remain){
    if(remain==0){ans++;return;}
    visited[i][j] = true;
    
    rep(d, 4) {
        int ni = i + di[d], nj = j + dj[d];
        if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        if (s[ni][nj] == '#' || visited[ni][nj]) continue;
        dfs(ni, nj, remain - 1);
    }

    visited[i][j] = false;
}

int main(void){
    cin>>h>>w>>k;
    s.resize(h);
    rep(i,h) cin>>s[i];
    visited.resize(h,vector<bool>(w,false));

    rep(i,h) rep(j,w) if(s[i][j]=='.') dfs(i,j,k);
    cout<<ans<<endl;
    return 0;
}