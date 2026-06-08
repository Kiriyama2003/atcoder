#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の駅(0~N-1)
    //d_i 駅iから駅i+1までの距離
    //q個のクエリ
    //駅lから駅rまでの距離 

    int n;   cin>>n;
    vector<int> a(n-1);
    rep(i,n-1) cin>>a[i];

    vector<ll> b(n);
    b[0]=0;
    REP(i,n-1) b[i]=b[i-1]+a[i-1];
    


    int q;  cin>>q;
    rep(i,q){
        int l,r;    cin>>l>>r;
        cout<<b[r]-b[l]<<endl;
    }



    
    return 0;
}