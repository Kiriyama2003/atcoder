#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
	string goal;  int n;  cin>>goal>>n;

    //dp[何袋目まで処理したか][Tの接頭辞の内どこまで一致させられたか]=最小金額
    vector<vector<int>> dp(n+1,vector<int>((int)goal.size()+1,1e9));
    dp[0][0]=0;

    rep(i,n){
        int a;  cin>>a;
        rep(k,(int)goal.size()+1) dp[i+1][k]=dp[i][k];

        rep(j,a){
            string s;   cin>>s;
            
            for(int start=0; start <= (int)goal.size()-(int)s.size(); start++){
                bool ok=true;
                for(int now=0;now<(int)s.size();now++){
                    if(goal[start+now]!=s[now]){ok=false; break;}
                }

                if(ok) dp[i+1][start+(int)s.size()] = min( dp[i+1][start+(int)s.size()],dp[i][start]+1);
            }
        }
    }
    cout<<(dp[n][(int)goal.size()]>=1e5 ? -1:dp[n][(int)goal.size()])<<endl;
	return 0;
}