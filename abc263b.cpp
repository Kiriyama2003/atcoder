#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;  cin>>n;
    vector<int> p(n+1);
    for(int i=2;i<=n;i++){
        cin>>p[i];
    }

    vector<int> dp(n+1);
    //dp[●]：人●が, 人1の何世代後か
    for(int i=2;i<=n;i++){
        dp[i]=dp[p[i]]+1;
    }

    //dp[n]：人nが, 人1の何世代後か
    cout<<dp[n]<<endl;
    return 0;
}