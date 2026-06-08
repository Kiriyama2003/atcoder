#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    if(n == 1){cout<<1<<endl; return 0;}

    vector<ll> diff;
    for(int i=1;i<n;i++) diff.push_back(a[i]-a[i-1]);
    
    //for(auto v:diff){cout<<v<<" ";} cout<<endl;

    ll ans=n;

    vector<ll> cnt;
    int now=1;
    for(int i=1;i<diff.size();i++){
        if(diff[i-1]==diff[i]){ now++; continue;}
        
        cnt.push_back(now);
        now=1;
    }

    cnt.push_back(now);

    //for(auto v:cnt){cout<<v<<" ";} cout<<endl;

    rep(i,cnt.size()){
        //if(cnt[i]==1) ans+=1;
        ans+= ((cnt[i])*(1+cnt[i]))/2;
    }
    //n==1の時, ここで問題　cnt={1}より, ans=2になっちゃう, 本当はans=1

    cout<<ans<<endl;

    return 0;
}