#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,q;  cin>>n>>q;
    vector<vector<int>> s(n,vector<int>(n));
    rep(i,n) rep(j,n)  cin>>s[i][j];

    rep(i,q){
        int a,b;    cin>>a>>b;
        if(s[--a][--b]==1) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}
