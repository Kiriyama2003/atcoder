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
const int MOD = 1000000007;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};  //上, 左, 下, 右
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}

int main(){
    int K;  cin>>K;
    if(K % 9 == 0){
		vector<int> dp(K + 1);
		dp[0] = 1;
		for (int i = 1; i <= K; ++i) {
			for (int j = i - 1; j >= i - 9 && j >= 0; --j) {
				dp[i] += dp[j];
				if (dp[i] >= MOD) dp[i] -= MOD;
			}
		}
		cout << dp[K] << endl;
	}
	else cout<<0<<'\n';
    return 0;
}