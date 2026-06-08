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
//左, 上, 右, 下
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
const int INF = 1e9;
int main(void){
    int H,W;    cin>>H>>W;
    vector<string> s(H);
    rep(i,H) cin>>s[i];

    int ans=10000000;
    vector used(H,vector<bool>(W,true));

    auto dfs=[&](int i,int j,int cnt,int tateyoko,auto self){
        if(s[i][j] == 'G'){
            ans = min(ans,cnt);
            return;
        }
        if(tateyoko==0){
            //左に移動
            if(used[i][j-1] == true and (s[i][j-1]!='#') and(j-1)>-1){
                used[i][j-1]=false;
                self(i,j-1,cnt+1,1,self);
                used[i][j-1]

            }

            //右に移動
            if(used[i][j+1] == true and (s[i][j+1]!='#') and(j+1)<W){

            }
        }else{
            //上に移動

            //下に移動
        }

    };

    rep(i,H) rep(j,W){
        if(s[i][j]=='S') {
            used[i][j]=false;
            dfs(i,j,0,0,dfs);
            dfs(i,j,0,1,dfs);
            used[i][j]=true;
        }
    }
    return 0;
}