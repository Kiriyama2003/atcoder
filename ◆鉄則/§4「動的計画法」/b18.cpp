#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,s;    cin>>n>>s;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    vector<vector<bool>> dp(69,vector<bool>(10009));

    dp[0][0]=true;
    for(int i=1;i<=s;i++) dp[0][i]=false;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            //真下は, 選択しないことを意味する
            if(dp[i-1][j] == true) dp[i][j]=true;
            else dp[i][j]=false;

            //
            if(j>=a[i] && dp[i-1][j-a[i]]==true) dp[i][j]=true;
        }
    }
    //if(dp[n][s] == true) cout<<"Yes"<<endl;
    if(dp[n][s] == false){ cout<<"-1"<<endl; return 0;}

    int place=s;
    vector<int> ans;
    for(int i=n;i>=1;i--){
        if(dp[i-1][place] == true) continue;
        else {
            place-=a[i];
            ans.push_back(i);
        }
    }
    reverse(all(ans));
    int ansi=(int)ans.size();
    cout<<ansi<<endl;
    for(int i=0;i<ansi;i++){
        cout<<ans[i]<<(i!=ansi-1?" ":"\n");
    }

    

    return 0;
}