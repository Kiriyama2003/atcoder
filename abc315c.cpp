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
    int n;  cin>>n;
    /*vector<pair<int,int>>sf(n);
    rep(i,n) cin>>sf[i].second>>sf[i].first;
    sort(all(sf));
    int ans=0;

    for(int i=0;i<n-1;i++){
        int t=sf.at(i).first, s=sf.back().first;
        if(sf[i].second == sf.back().second) t/=2;
        ans=max(ans,s+t);
    }
    cout<<ans<<endl;*/

    vector<vector<int>> a(n);   //味ごとの, おいしさの配列
    rep(i,n) {
        int f,s;    cin>>f>>s;
        a[f-1].push_back(s);
    }

    //同じ味を選ぶ時
    int ans=0;
    rep(i,n){
        if(a[i].size()<2) continue;
        sort(a[i].rbegin(),a[i].rend());
        int now=a[i][0]+a[i][1]/2;
        ans=max(ans,now);
    }

    //異なる味を選ぶとき
    vector<int>b;
    rep(i,n){
        if(a[i].size()==0) continue;
        b.push_back(a[i][0]);
    }
    sort(b.rbegin(),b.rend());
    if(b.size()>=2) ans=max(ans,b[0]+b[1]);
    cout<<ans<<endl;

    return 0;
}