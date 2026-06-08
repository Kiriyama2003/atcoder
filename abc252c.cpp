#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    
    vector<int> num(10);

    map<int,vector<int>> mp={{0,{-1,0}},{1,{-1,0}},{2,{-1,0}},{3,{-1,0}},{4,{-1,0}},{5,{-1,0}},{6,{-1,0}},{7,{-1,0}},{8,{-1,0}},{9,{-1,0}}}; 
    //mp[i][j] iが最後に出るのは, 前からj番目

    for(int i=0;i<n;i++){
        for(int j=0;j<=9;j++){
            if(mp[s[i][j]-'0'][0] < j){
                mp[s[i][j]-'0'][0]=j;
                mp[s[i][j]-'0'][1]=0;
            } else if(mp[s[i][j]-'0'][0] == j) mp[s[i][j]-'0'][1]++;
        }
    }

    

    int ans=1e7;
    for(int i=0;i<=9;i++){
        //iが文字
        ans=min(ans,mp[i][0]+mp[i][1]*10);
    } 
    cout<<ans<<endl;
    

    return 0;
}