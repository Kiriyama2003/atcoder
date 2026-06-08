#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int a[101][101][101];
int sum[102][102][102];
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int r,c;    cin>>r>>c;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            int num;    cin>>num;
            if(i==r && j==c) cout<<num<<endl;
        }
    }

    return 0;
}