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
    int n;  ll t;   cin>>n>>t;
    vector<ll>A(n);     //各曲の時間
    ll sum=0;   //全曲の合計時間
    rep(i,n) {cin>>A[i]; sum+=A[i];}
    
    ll rslt=t%sum;  ll now=0;
    for(int i=0;i<n;i++){
        if(now<rslt &&  rslt<now+A[i]) {
            cout<<i+1<<" "<<rslt-now<<endl;
            return 0;
        }
        now+=A[i];
    }

    return 0;
}