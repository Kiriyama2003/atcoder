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
    int asize,bsize,goal;
    cin>>asize;  
    vector<int> a(asize);
    rep(i,asize) cin>>a[i];
    cin>>bsize;     
    vector<int> b(bsize);
    rep(i,bsize) cin>>b[i];
    cin>>goal;

    vector<int> dp(goal+1),available(goal+1,1);
    for(auto v:b) available[v]=0;

    //dp[i]：i段目に登れるか
    //avairable[i]：i段目にモチがあるか

    dp[0]=1;    //0段目は登れる
    for(int i=1;i<=goal;i++){   //O(10^5)
        if(!available[i]) dp[i]=0;  //モチがあるところなら
        else{
            for(const auto v:a){    //O(10)
                if(i>=v) if(dp[i-v]==1) dp[i] = 1;
                //if(i>=v) dp[i] = dp[i]|dp[i-v]; どっちでも
            }
        }
    }
    cout<<(dp[goal]?"Yes":"No")<<endl;
    return 0;
}