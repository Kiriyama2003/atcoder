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
    
    int n;  cin>>n;
    vector<int> h(n+1,0);
    for(int i=1;i<=n;i++) cin>>h[i];
    vector<int> dp(n+1,0);
    dp[0]=0;    dp[1]=0;    dp[2]=abs(h[1]-h[2]);

    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+abs(h[i-1]-h[i]), dp[i-2]+abs(h[i-2]-h[i]));
    }
    //cout<<dp[n]<<endl;

    vector<int> ans;    //答えを格納 
    int place=n;    //現在の位置
    while(1){
        ans.push_back(place);
        if(place==1) break;
        if(dp[place-1]+abs(h[place-1]-h[place]) == dp[place]) place--;
        else if(dp[place-2]+abs(h[place-2]-h[place]) == dp[place]) place-=2;
    }
    reverse(all(ans));
    int ansi=(int)ans.size();
    cout<<ansi<<endl;
    for(int i=0;i<ansi;i++){
        cout<<ans[i]<<(i!=ansi-1?" ":"\n");
    }

    return 0;
}