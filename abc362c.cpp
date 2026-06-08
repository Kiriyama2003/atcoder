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
    int n;  cin>>n;
    vector<ll> L(n),R(n);
    ll sum_L=0,sum_R=0;
    rep(i,n){
        cin>>L[i]>>R[i];
        sum_L+=L[i];    sum_R+=R[i];
    }
    if(0<sum_L || sum_R<0){
        cout<<"No"<<endl; return 0;
    }else{
        cout<<"Yes"<<endl;
    }

    //remain：Lの総和
    ll remain=sum_L;
    //resultの合計をにしたい
    //resultの初期値：L={,,,,,,}
    vector<ll> result=L;
    for(int i=0;i<n;i++){
        ll d=min(R[i]-L[i],-remain);
        result[i]+=d;
        remain+=d;
    }

    for(int i=0;i<n;i++){
        cout<<result[i]<<((i!=n-1)?" ":"\n");
    }


    return 0;
}