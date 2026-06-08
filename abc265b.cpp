#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;ll t;    cin>>n>>m>>t;
    //t持ち時間 ボーナス部屋mコ
    //A1~A(n-1)  A1:部屋1->部屋2 A(n-1):部屋n-1 -> 部屋n
    vector<int>a(n);
    for(int i=1;i<n;i++){ cin>>a[i];}

    map<ll,ll>x;
    rep(i,m){ ll a; cin>>a>>x[a];}

    for(int i=1;i<n;i++){
        //i:0->n-2
        t+=x[i];    t-=a[i];
        if(t<=0) {cout<<"No"<<endl;return 0;} 
    }
    cout<<"Yes"<<endl;

    return 0;
}