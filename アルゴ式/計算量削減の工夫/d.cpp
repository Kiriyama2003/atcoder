#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の整数
    //任意の整数を1つ選ぶ操作を, 2回行い, それらの積　それの合計
    //Σ(i=1 -> n) {Σ(j=1 -> n) Ai*Aj} 
    int n;   cin>>n;
    vector<int> a(n);

    ll sum=0;
    rep(i,n) {cin>>a[i];  sum+=a[i];}
    
    ll ans=0;
    rep(i,n) ans += a[i]*sum;
    
    //ただ単に, sum*sumでもいい
    cout<<ans<<endl;





    return 0;
}