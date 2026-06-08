#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;
    set<pair<int,int>>p;
    rep(i,m){
        int k;  cin>>k;
        vector<int>a(k);
        rep(j,k) cin>>a[j];
        for(int j=0;j<k-1;j++){
            for(int l=j+1;l<k;l++){
                p.insert({a[j],a[l]});
            }
        }
    }
    if(n*(n-1)/2 ==p.size()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}