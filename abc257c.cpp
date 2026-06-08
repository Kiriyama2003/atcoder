#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int main(){
    int n;  string s;   cin>>n>>s;
    vector<pair<int,char>> a;
    int ans=0;
    rep(i,n){
        ll tmp; cin>>tmp;
        a.push_back({tmp,s[i]});
        if(s[i]=='1') ans++;
    }
    sort(all(a));
    int x=ans;  //大人の数
    rep(i,n){
        if(a[i].second=='1') x--;   //値が小さい方から見ていく
        else x++;   //子供なら++

        if(i != n-1){ if(a[i].first != a[i+1].first) ans = max(ans,x);}
        else ans=max(ans,x);
    }
    cout<<ans<<endl;
    return 0;
}