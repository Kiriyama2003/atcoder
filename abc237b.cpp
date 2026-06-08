#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#define mod 998244353
#define inv2 499122177
int main(){
    int h,w;    cin>>h>>w;
    vector<vector<int>> a(h+1,vector<int>(w+1));
    REP(i,h) REP(j,w) cin>>a[i][j];

    REP(i,w){
        REP(j,h){ cout<<a[j][i]<<" ";}
        cout<<endl;
    }
    

    
    return 0;
}