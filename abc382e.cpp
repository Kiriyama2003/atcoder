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
const int INF = 1001001001;

int main(void){
    int n,x;   cin>>n>>x;
    vector<int> per(n);
    rep(i,n) cin>>per[i];

    vector<double> P(1,1);
    rep(i,n) {
        vector<double> old(i+2);
        swap(old,P);
        double p = per[i]/100.;
        rep(j,i+1) {
            P[j] += old[j]*(1-p);
            P[j+1] += old[j]*p;
        }
    }

    vector<double> dp(x+1);
    //dp[0]=0 残り0枚の状態から, ゴールするまでの回数の期待値は, 当然ゼロ回である
    //dp[1] 残り1枚の状態から, ゴールするまでの回数の期待値は
        //dp[1]*p[4] + 1
    for(int i = 1; i <= x; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i] += dp[max(i-j,0)]*P[j];
        }

        dp[i] += 1;
        dp[i] /= 1-P[0];
    }

    printf("%.10f\n", dp[x]);
    return 0;
}