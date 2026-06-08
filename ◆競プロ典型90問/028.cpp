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
    int n;  cin>>n;
    vector<vector<int>> A(1009,vector<int>(1009,0));

    

    rep(i,n){
        int li,lj, ri, rj;  cin>>lj>>li>>rj>>ri;
        A[li][lj]++, A[ri][rj]++;
        A[ri][lj]--, A[li][rj]--;
    }

    rep(i,1002) for(int j=1;j<1002;j++) A[i][j] += A[i][j-1];   //行ごとに累積和 右に進める
    rep(j,1002) for(int i=1;i<1002;i++) A[i][j] += A[i-1][j];   //列ごとに累積和 下に進める
    


    vector<int> ans(n+1,0);
    rep(i,1001) rep(j,1001) ans[A[i][j]]++;
    for(int i=1;i<=n;i++) cout<<ans[i]<<'\n'; 
    return 0;
}