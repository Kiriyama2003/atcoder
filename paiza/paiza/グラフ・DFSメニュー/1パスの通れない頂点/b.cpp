#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,s,k;  cin>>n>>s>>k;
    //頂点n個, 始点頂点s, 移動回数k

    rep(i,k+1){
        //後置と前置で変わる
        int num=(s++)%(n+1);
        if(num==0){num++; s++;}
        cout<<num<<(i!=k?" ":"");
    }

    

    return 0;
}