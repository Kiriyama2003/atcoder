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

    //これが一番わかりやすい


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
        swap(dp, old);
        //oldからdpへ遷移

        rep(j1,x+1) rep(j2,x+1){
            if(old[j1][j2]==INF) continue;

            if(a[i] == 1){
                //1から1へ　コスト0
                if(j1 + b[i] <= x) chmin(dp[j1+b[i]][j2],old[j1][j2]);
                //1なのに2へ コスト1
                if(j2 + b[i] <= x) chmin(dp[j1][j2+b[i]],old[j1][j2]+1);
                //1から3へ  コスト1
                chmin(dp[j1][j2],old[j1][j2]+1);
            }else if(a[i] == 2){  // チーム2から移動
                //2から1へ  コスト1
                if(j1+b[i] <= x) chmin(dp[j1 + b[i]][j2], old[j1][j2]+1);
                //2から2へ  コスト0
                if(j2+b[i] <= x) chmin(dp[j1][j2 + b[i]],old[j1][j2]);
                //2から3へ  コスト1
                chmin(dp[j1][j2],old[j1][j2]+1);
            }else if(a[i] == 3){  // チーム3から移動
                //3から1へ  コスト1
                if(j1+b[i] <= x) chmin(dp[j1+b[i]][j2], old[j1][j2]+1);
                //3から2へ  コスト1
                if(j2+b[i] <= x) chmin(dp[j1][j2+b[i]], old[j1][j2]+1);
                //3から3へ  コスト0
                chmin(dp[j1][j2],old[j1][j2]);
            }
        }
        
    }
    cout<<(dp[x][x]==INF?-1:dp[x][x])<<endl;
    return 0;
}