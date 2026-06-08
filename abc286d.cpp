#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    int n,x;    cin>>n>>x;
    //n種類の硬貨で, x円にできるか
    vector<int> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];

    vector<vector<bool>> dp(51,vector<bool>(10001,false));
    dp[0][0]=true;
    rep(i,n){   //硬貨の種類
        for(int j=0;j<=x;j++){ //j円について
            for(int k=0;k<=b[i];k++){   //何枚使うか
                //配列アクセスが負にならないように
                //配列アクセスを超えないように
                if(0 <= j - a[i]*k){
                    if(dp[i][j-a[i]*k] == true) dp[i+1][j]=true;
                }
            }
        }
    }

    cout<<(dp[n][x]?"Yes":"No")<<endl;
    return 0;
}