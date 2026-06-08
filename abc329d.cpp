#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;      //n人 m票

    vector<int>a(m);    rep(i,m) cin>>a[i];
    vector<int>cnt(n+1);  //各候補者の得票数
    int ans=0; //現時点の当選者 1-index

    rep(i,m){
        cnt[a[i]]++;
        if(cnt[ans] < cnt[a[i]]) ans=a[i];
        else if(cnt[ans]==cnt[a[i]]) ans=min(ans,a[i]);
        cout<<ans<<endl;
    }

    return 0;
}