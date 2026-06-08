#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,m,v;    cin>>n>>m>>v;
    //vector<vector<int>> s(n+1,vector<int>(n+1));
    int cnt=0;
    rep(i,m){
        int a,b;    cin>>a>>b;
        if(a==v || b==v) cnt++;
    }
    cout<<cnt<<endl;

    

    return 0;
}