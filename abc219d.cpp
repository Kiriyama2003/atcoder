#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,x,y;  cin>>n>>x>>y;

    const int INF=1001001001;
    vector dp(x+1,vector<int>(y+1,INF));
    dp[0][0]=0;

    rep(i,n){
        int a,b;    cin>>a>>b;
        auto p =dp; //これは, 保存しとくよう
        

        //pからdpに遷移させる
        rep(j,x+1) rep(k,y+1){             
                dp[min(j+a,x)][min(k+b,y)] = 
                    min( dp[min(j+a,x)][min(k+b,y)], p[j][k]+1);
        }
    }
    cout<<(dp[x][y]==INF?-1:dp[x][y])<<endl;
    return 0;
}