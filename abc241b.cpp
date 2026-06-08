#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    //n本の麺から成るパスタ
    //i本目の麺の長さ　Ai
    //M日　j日めに, 長さBjの麺を食べたい
    //Yes/No

    //解法1
    /*vector<ll> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];

    sort(all(a));

    map<ll,ll> mp;
    rep(i,n) mp[a[i]]++;
    rep(i,m){
        if(mp[b[i]]==0){cout<<"No"<<endl; return 0;}
        mp[b[i]]--;
    }
    cout<<"Yes"<<endl;*/


    //解法1を整理した
    map<ll,ll> mp;
    rep(i,n){int x;  cin>>x; mp[x]++;} 
    rep(i,m){
        int x;  cin>>x;
        if(mp[x]==0){cout<<"No"<<endl; return 0;}
        mp[x]--;
    }
    cout<<"Yes"<<endl;


    return 0;
}
