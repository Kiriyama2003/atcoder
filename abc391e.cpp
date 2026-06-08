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
int main(void){
	int n;  string s;   cin>>n>>s;

    vector dp(s.size(), vector<int>(2,1));
    rep(i,s.size()) dp[i][s[i]-'0'] = 0;
    //頂点が0なら, dp[頂点][0]=0 [][0]だから, コスト0
    //            dp[][1]=1
    
    //頂点が1なら, dp[頂点][1]=0 [][1]にするには, にコスト1が必要あである
    //            dp[頂点][0]=1 
    
    const int INF = 1001001001;
    while(dp.size() > 1) {
        vector old(dp.size()/3, vector<int>(2,INF));

        swap(dp,old);
        //old 長い　参照用
        //dp 短い　引き継ぐ
        

        for(int l = 0; l < old.size(); l += 3) {
            //2^3通り
            rep(s,8) {
                int cost = 0;
                rep(i,3) cost += old[l+i][(s>>i) & 1];

                int x = (__builtin_popcount(s) >=2) ? 1 : 0;

                chmin(dp[l/3][x], cost);
            }
        }
    }

    int ans = max(dp[0][0], dp[0][1]);
    cout<<ans<<endl;
	return 0;
}