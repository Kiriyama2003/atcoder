#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m;    cin>>n>>m;
    vector<vector<int>> s(n+1,vector<int>(n+1));
    rep(i,m){
        int a,b;    cin>>a>>b;      s[a][b]++;
    }

    vector<pair<int,int>> ans;

    for(int i=1;i<=(n-1);i++){
        for(int j=i+1;j<=n;j++){
            if(s[i][j]+s[j][i] >=2) ans.push_back({i,j});
        }
    }




    cout<<(int)ans.size()<<endl;
    for(auto [vv,v]:ans) cout<<vv<<" "<<v<<endl;

    return 0;
}