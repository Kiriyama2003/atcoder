#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n,m; cin>>n>>m;
    vector<vector<int>> b(n,vector<int>(m));
    rep(i,n) rep(j,m) cin>>b[i][j];
    
    bool check=true;
    //隣を比較
    

    ll start_i=(b[0][0]-1) /7;
    ll start_j=(b[0][0]-1) %7;

    if(start_j + m >=8) check=false;

    //各行において, 要素の隣同士を比較
    rep(i,n){
        rep(j,m-1) if(b[i][j]+1 != b[i][j+1]) check=false;
    }

    //各列において, 要素の上と下を比較
    rep(i,m){
        rep(j,n-1) if(b[j][i]+7 != b[j+1][i]) check=false;
    }
    
    
    std::cout<<(check?"Yes":"No")<<endl;
    return 0;
}