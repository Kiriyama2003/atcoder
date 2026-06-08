#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n本のひも
    //クエリQ個
    //長さA以上B以下のひもの本数
    
    int n;  cin>>n;
    vector<ll> L(n);
    rep(i,n) cin>>L[i];
    sort(all(L));

    map<ll,ll> nagasa;
    int now=0;
    nagasa[0]=0;
    for(int i=1;i<=100001;i++){
        nagasa[i]=nagasa[i-1];
        while(L[now]==i){
            if(L[now] == i) nagasa[i]++;
            now++;
        }
    }

    int q;  cin>>q;
    rep(i,q){
        int l,r;    cin>>l>>r;
        cout<<nagasa[r]-nagasa[l-1]<<endl;
    }


    return 0;
}