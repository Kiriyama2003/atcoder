#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
#define ll long long
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int h,w,ans=0;    cin>>h>>w;
    vector<vector<int>>a(h,vector<int>(w));
    rep(i,h) rep(j,w) cin>>a[i][j];
    set<int>s;

    auto dfs=[&](auto f,int i,int j)->void{
        if(i>=h || j>=w) return;
        if(s.count(a[i][j])) return;
        if(i==h-1 && j==w-1){ ans++; return;}

        s.insert(a[i][j]);
        f(f,i,j+1); //右に
        f(f,i+1,j); //下に
        s.erase(a[i][j]);
    };

    dfs(dfs,0,0);

    cout<<ans<<endl;
    return 0;
}