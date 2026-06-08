#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,a,b;  cin>>n>>a>>b;
    vector<bool> dp(n+1);

    for(int i=0;i<=n;i++){
        if( i >= a and dp[i-a]==false ) dp[i]=true;
        else if(i >= b and dp[i-b]==false) dp[i]=true;
        else dp[i]=false;
    }
    cout<<(dp[n]==true ? "First":"Second")<<endl;
    return 0;
}