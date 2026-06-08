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
const int MOD = 1000000007;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};  //上, 左, 下, 右
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}

int main(){
    int n;   cin>>n;

    vector<vector<int>> G(n);
    vector<int> col(n);

    rep(i,n-1){
        ll a,b; cin>>a>>b;  --a,--b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    auto dfs=[&](int pos,int cur,auto& self)->void{
        col[pos]=cur;
        for(int i:G[pos]){
            if(col[i]==0) self(i,3-cur,self);
        }
    };

    dfs(0,1,dfs);
    vector<int> an1,an2;
    rep(i,n){
        if(col[i]==1) an1.push_back(i);
        if(col[i]==2) an2.push_back(i);
    }

    if(an1.size()>an2.size()){
        rep(i,n/2) cout<<an1[i]+1<<(i!=(n/2-1)?' ':'\n');
    }else{
        rep(i,n/2) cout<<an2[i]+1<<(i!=(n/2-1)?' ':'\n');
    }
    return 0;
}