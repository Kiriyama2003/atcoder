#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の整数
    //2個の積(重複を許さない)の合計
    //選び方はnC2個
    int n;   cin>>n;

    vector<int> a(n);
    
    ll sum=0;       //全部の合計
    rep(i,n){cin>>a[i];  sum+=a[i];}

    ll ans=0;
    rep(i,n){ ans += a[i]*(sum-=a[i]);}
    //だんだんsumからa[i]を減らしていく
    cout<<ans<<endl;
    return 0;
}