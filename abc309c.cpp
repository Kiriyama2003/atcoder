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
    ll n,k; cin>>n>>k;
    //n種類の薬　k錠以下の薬になる日
    vector<pair<ll,ll>>a(n);
    rep(i,n) cin>>a[i].first>>a[i].second;
    //a[i].first 日間　a[i].second錠飲む
    sort(all(a));

    ll sum=0;
    rep(i,n) sum+=a[i].second;


    if(sum<=k) cout<<1<<endl;
    else{
        rep(i,a.size()){
            //i-1が前回のループで削除したところ
            //削除したところのfirst +1 だね
            if(sum<=k){ cout<<a[i-1].first + 1<<endl; return 0;}
            sum-=a[i].second;
        }
        cout<<a.back().first +1<<endl;
    }

    
    return 0;
}