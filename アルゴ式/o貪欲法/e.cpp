#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の座標, 頂点0からスタートし, 全頂点を経由して, 頂点0に戻る
    //まだ訪れていない頂点のうち, 現頂点かあら最も近い頂点に移動する
    int n;  cin>>n;
    vector<pair<int,int>> a(n);
    rep(i,n) cin>>a[i].first>>a[i].second;
    vector<bool> ch(n,true);  ch[0]=false;

    int x=a[0].first,y=a[0].second,ind;
    double ans=0; ll seki;
    
    rep(i,n-1){
        ll num=1e8;
        for(int j=1;j<n;j++){
            if(!ch[j]) continue;
            seki=(a[j].first-x)*(a[j].first-x)+(a[j].second-y)*(a[j].second-y);
            if(seki < num){ num=seki; ind=j;}
        }
        ch[ind]=false;  x=a[ind].first; y=a[ind].second;
        ans+= sqrt((double)num);
    }

    seki=(a[0].first-x)*(a[0].first-x) + (a[0].second-y)*(a[0].second-y);
    ans+= sqrt(seki);

    cout<<fixed<<setprecision(6)<<ans<<endl; 
    return 0;
}