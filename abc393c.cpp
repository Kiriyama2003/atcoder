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
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    
    int n,m;  cin>>n>>m;
    vector<vector<int>> edge(n);

    int cnt=0;
    set<pair<int,int>> s;
    rep(i,m){
        int u,v;    cin>>u>>v;  --u,--v;
        if(u==v) cnt++;
        else if(s.count({u,v})) cnt++;
        else if(s.count({v,u})) cnt++;
        s.insert({u,v});
        s.insert({v,u});
    }

    cout<<cnt<<endl;

    return 0;
}