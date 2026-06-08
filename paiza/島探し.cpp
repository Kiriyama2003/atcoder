#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int w,h;
vector<vector<int>> s;
//vector<vector<bool>> seen;
void dfs(int ii,int jj){
    //seen[nowx][nowy]=true;
    s[ii][jj]=0;
    vector<pair<int,int>> d={{1,0},{-1,0},{0,1},{0,-1}};
    rep(i,4){
        int nextii = ii +d[i].first;
        int nextjj = jj +d[i].second;
        
        //if(seen[nextx][nexty]) continue;    //訪問済み

        if (nextii < 0 || nextii >= h || nextjj < 0 || nextjj >= w) continue;
        if(s[nextii][nextjj]==0) continue;    //シロ
        dfs(nextii,nextjj);
    }
}
int main(){
    cin>>w>>h;
    s.assign(h,vector<int>(w));
    //seen.resize(n,vector<bool>(m,false));

    rep(i,h) rep(j,w) cin>>s[i][j];
    int ans=0;

    rep(i,h) rep(j,w){
        if(s[i][j]==0) continue;
        dfs(i,j);
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}