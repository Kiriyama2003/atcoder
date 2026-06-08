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
void chmin(int& a,int b){a=min(a,b);}
int main(){
    int n;  cin>>n;
    vector<int> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];
    int x=0;
    rep(i,n) x+=b[i];
    if(x%3 != 0){cout<<-1<<endl; return 0;}
    x/=3;

    const int INF=1001001001;
    vector dp(x+1,vector<int>(x+1,INF));
    dp[0][0]=0; //

    rep(i,n){
        vector old(x+1,vector<int>(x+1,INF));
        swap(old,dp);   //oldからdpへの遷移
        int cost1= a[i]!=1;  //1or0
        int cost2= a[i]!=2;  //1or0
        int cost3= a[i]!=3;  //1or0
        rep(j1,x+1) rep(j2,x+1){
            if(old[j1][j2]==INF) continue;

            //1を選ぶ
            if(j1+b[i] <= x) chmin(dp[j1+b[i]][j2], old[j1][j2]+cost1);
            //2を選ぶ
            if(j2+b[i] <= x) chmin(dp[j1][j2+b[i]], old[j1][j2]+cost2);
            //3を選ぶ
            chmin(dp[j1][j2], old[j1][j2]+cost3);
        }
    }
    cout<<(dp[x][x]==INF?-1:dp[x][x])<<endl;
    return 0;
}