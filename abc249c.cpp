#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;  cin>>n>>k;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    int ans=0;
    for(int i=0;i<(1<<n);i++){
        //i=0 ~ (2^n -1) 
        vector<int> sum(26);

        //j桁目
        for(int j=0;j<n;j++){
            // 10 & 01 だから　0になる　　1は, 最下位ビット以外0である
            //iをj個右シフト
            if((i>>j) & 1){
                for(int x=0;x<s[j].size();x++) sum[s[j][x]-'a']++;
            }
        }

        int now=0;
        for(int j=0;j<26;j++) if(sum[j]==k) now++;
        ans=max(ans,now);
    }
    cout<<ans<<endl;

    
    return 0;
}
