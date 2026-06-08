#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    /*
    const int M=1000005;
    vector<vector<int>> is(M);
    rep(i,n) is[a[i]].push_back(i);

    vector<ll> ans(n);
    ll now=0;   //後ろからやる
    for(int x=M-1;x>=1;x--){
        //is[x]は, 値がxである, 添え字が入っている
        //だから, ans[添え字]に解答が入る
        for(int i:is[x]) ans[i]=now;
        //値がxの添え字の個数 * 値x　を掛けて足していく
        now+= (ll)x*is[x].size();
    }*/


    ll s=accumulate(a.begin(),a.end(),0LL);
    map<int,vector<int>>d;
    rep(i,n) d[a[i]].push_back(i);
    vector<ll>ans(n);

    for(auto[value,i_list]:d){
        s-= (ll)value * i_list.size();
        rep(j,i_list.size()) ans[i_list[j]]=s;
    }




    rep(i,n) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}