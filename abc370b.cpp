#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<vector<int>> vec(n+1);
    REP(i,n){
        vec[i].resize(i+1);
        REP(j,i){
            
            cin>>vec[i][j];
        }
    }
    int now=1;
    for(int i=1;i<=n;i++){
        if(now>=i) now=vec[now][i];
        else now=vec[i][now];
    }
    cout<<now<<endl;

    
    return 0;
}