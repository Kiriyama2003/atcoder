#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //蟻の向き
    int n,t;   cin>>n>>t;
    //時間T, 蟻の数s
    string s;     cin>>s;

    vector<ll> x1,x2;
    rep(i,n){
        ll x;   cin>>x;
        if(s[i]=='1') x1.push_back(x);
        else x2.push_back(x);
    }

    sort(x1.begin(),x1.end());
    sort(x2.begin(),x2.end());
    int l=0,r=0;
    ll ans=0;

    for(int i=0;i<(int)x1.size();i++){
        //t=0で, 左にある個数
        while(l<(int)x2.size() && x2[l]<x1[i]) l++;
        //t=T+0.1で, 左ににある個数
        while(r<(int)x2.size() && x2[r]<=x1[i]+2*t) r++;

        ans+= r-l;
    }
    cout<<ans<<endl;

    return 0;
}