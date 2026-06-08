#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};


int main(){
    string s;   cin>>s;
    int n = s.size();
    
    vector<int> dp(9);
    dp[0] = 1;

    const int mod = 1000000007;
    string t = "chokudai";

    rep(j,n) rep(i,8){
        if(s[j] == t[i]) {
            (dp[i+1] += dp[i]) %= mod;
        }
    }
    cout<<dp[8]<<endl;

    return 0;
}
