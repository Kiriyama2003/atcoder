#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int h,w; cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];

    if(s[0][0]!='s'){cout<<"No"<<endl; return 0;}

    vector<char> next(256);
    next['s']='n';
    next['n']='u';
    next['u']='k';
    next['k']='e';
    next['e']='s';
    
    //string t="sunkes";
    //rep(i,5) next[t[i]]=t[i+1];
    
    vector seen(h,vector<bool>(w)); //訪問済みか
    const vector<int> dx = {0, 0, 1, -1}; //下, 上, 右, 左
    const vector<int> dy = {1, -1, 0, 0};


    /*auto dfs=[&](auto &dfs,int i,int j)->void{
        seen[i][j]=true;
        rep(k,4){
            int ni=i+dx[k];
            int nj=j+dy[k];


            //範囲外
            if(ni<0 or ni>=h or nj<0 or nj>=w) continue;

            //二回目
            if(seen[ni][nj]) continue;
            
            //行けない
            if(s[ni][nj] != next[s[i][j]]) continue;
            
            //関門突破
            dfs(dfs,ni,nj);
        }
    };
    dfs(dfs,0,0);*/

    queue<pair<int,int>> que;
    seen[0][0]=true;
    que.push({0,0});
    while(!que.empty()){
        auto [i,j]=que.front(); que.pop();
        rep(k,4){
            int ni=i+dx[k]; int nj=j+dy[k];

            if(ni<0 or ni>=h or nj<0 or nj>=w) continue;
            if(seen[ni][nj]) continue;
            if(s[ni][nj] != next[s[i][j]]) continue;
            
            seen[ni][nj]=true;
            que.push({ni,nj});
        }   
    }


    cout<<(seen[h-1][w-1]?"Yes":"No")<<endl;
    return 0;

}