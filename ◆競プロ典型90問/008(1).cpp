#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}


const int MOD = 1000000007;

// a に b を足して、MOD をとる関数
void add(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}
int main(){
    int n;  cin>>n;
    string s;   cin>>s;
    const string T = "atcoder";

    vector<vector<int>> dp(n+1, vector<int>(T.size()+1, 0));
    dp[0][0]=1;

    rep(i,n){
        for (int j = 0; j <= T.size(); ++j) {

            //[i][j]を起点に見る
            //[0~s.size()-1][0~t.size()]

            // S[i] を選ばない場合
            add(dp[i+1][j], dp[i][j]);

            // S[i] を選ぶ場合
            if((j != T.size()) && s[i] == T[j]) {
                add(dp[i+1][j+1], dp[i][j]);
            }
        }
    }
    cout<<dp[n][T.size()]<<endl;
    
    return 0;
}