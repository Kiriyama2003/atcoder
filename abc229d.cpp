#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   cin>>s;
    int k;  cin>>k;
    int n=s.size();
    
    vector<int> cnt(n+1);
    rep(i,n){
        if(s[i]=='.') cnt[i+1]=cnt[i]+1;
        else cnt[i+1]=cnt[i];
    }

    int ans=0,r=0;
    for(int l=0;l<n;l++){
        while(r<n && cnt[r+1]-cnt[l] <= k) r++;
        //cout<<l<<" "<<r<<endl;
        ans=max(ans,r-l);
    }
    cout<<ans<<endl;

    return 0;
}
