#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //0~N-1日分の来場者数
    //連続したd日　合計が大きい期間を求める
    //出力　l~r

    int n,d;   cin>>n>>d;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];

    vector<ll> b(n+1);
    b[0]=0;
    REP(i,n) b[i]=b[i-1]+a[i-1];

    int MAX=-1;
    int ans;
    for(int i=0;i+(d-1)<n;i++){
        if(MAX <= b[i+(d-1)+1]-b[i]) {
            ans=i;  MAX=b[i+(d-1)+1]-b[i];
        }
    }
    cout<<ans<<'~'<<ans+(d-1)<<endl;



    
    return 0;
}