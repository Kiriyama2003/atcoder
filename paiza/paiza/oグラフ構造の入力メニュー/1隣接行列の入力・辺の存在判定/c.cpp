#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n;  cin>>n;
    vector<vector<int>> s(n,vector<int>(n));
    rep(i,n){
        rep(j,n)  cin>>s[i][j];
    }
    int ans=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<n;j++){
            if(s[i][j]==1) ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
