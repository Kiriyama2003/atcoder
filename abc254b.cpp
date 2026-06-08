#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<vector<int>> a(n+1,vector<int>(n+1,0));
    a[1][1]=1;  cout<<1<<endl;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
        for(int k=1;k<=i;k++) cout<<a[i][k]<<(k!=1?" ":"\n");
    }
    return 0;
}