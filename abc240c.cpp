#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,x;  cin>>n>>x;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];


    vector<vector<bool>> dp(101,vector<bool>(10010,false));
    dp[0][0]=true;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=9999;j++){
            if(dp[i-1][j]){
                //範囲外参照を防止
                if(dp[i][j+a[i]] <= 10000) dp[i][j+a[i]]=true;
                if(dp[i][j+b[i]] <= 10000) dp[i][j+b[i]]=true;
            }
        }
    }
    cout<<(dp[n][x]?"Yes":"No")<<endl;


    return 0;
}