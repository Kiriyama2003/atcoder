#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
#include <atcoder/all>
using namespace atcoder;
using mint = atcoder::modint998244353;
int main(){
    int n,m,k;  cin>>n>>m>>k;
    //長さnの数列A
    //1<= A_i <= m   ΣA <= k 

    vector<vector<mint>> dp(n+1,vector<mint>(k+1,0));
    dp[0][0]=1;

    //i+1行目について
    for(int i=0;i<n;i++){
        //総和がjである数列から
        for(int j=0;j<=k;j++){ //j<kが正しいが
        //どうせdp[2][0]=0より, j=0の時は, 何も起こらない


            for(int l=1;l<=m;l++){
                if(j+l <= k) dp[i+1][j+l] +=dp[i][j];
            }


        }
    }
    mint res=0;
    for(int i=1;i<=k;i++) res+=dp[n][i];
    cout<<res.val()<<endl;


    return 0;
}