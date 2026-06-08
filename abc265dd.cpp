#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;      cin>>n;
    string s;   cin>>s;
    //青木君の手

    //高橋君は一度も負けなかった
    //高橋君の手は, i,i+1で異なる
    //高橋君の勝利数の　最大値

    vector<vector<int>> dp(n+1,vector<int>(3,-1001001001));
    rep(i,3) dp[0][i]=0;

    for(int i=1;i<=n;i++){
        int x=0;
        if(s[i-1]='R') x=0;
        if(s[i-1]='P') x=1;
        if(s[i-1]='S') x=2;

        rep(j,3){//次の手
            int val=0;
            if(j==(x+1)%3) val=1;
            if(j==(x+2)%3) continue;
            rep(pj,3){//次の手の候補
                if(j==pj) continue;
                dp[i][j]=max(dp[i][j],dp[i-1][pj]+val);
            }
        }
    }

    cout<<max({dp[n][0],dp[n][1],dp[n][2]})<<endl;


    return 0;
}