#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//https://qiita.com/xryuseix/items/1059101a31107ba330d4
//累積和とは（超初心者用）

int main(){
    //n個の整数が与えられる　連続する3つの和の最大値を出力
    int n,ans=0;    cin>>n;
    vector<int> a(n),b(n+1,0);

    rep(i,n) cin>>a[i];

    for(int i=1;i<n+1;i++) b[i]=a[i-1]+b[i-1];
    for(int i=3;i<n+1;i++) ans=max(ans,b[i]-b[i-3]);

    cout<<ans<<endl;
    return 0;
}
