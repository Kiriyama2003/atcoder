#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n,k; cin>>n>>k;

    vector<int> a(300000+9);
    for(int i=0;i<=300000+8;i++){
        string num=to_string(i);
        int sub=0;
        rep(i,(int)num.size()) sub += num[i]-'0';
        a[i]= max(0,i-sub);
    }

    vector<vector<int>> dp(300000+9,vector<int>(30));
    
    for(int i=0;i<=300000+8;i++) dp[i][0] = a[i];

    
    for(int keta=1;keta<30;keta++){
        for(int i=0;i<=300000+8;i++){
            dp[i][keta]= dp [ dp[i][keta-1] ] [keta-1];
        }
    }
    for(int i=1;i<=n;i++){
        int now=i;
            for(int keta=29;keta>=0;keta--){
                if(k & (1ll<<keta)) now=dp[now][keta];
            }
        cout<<now<<endl;
    }
    return 0;
}