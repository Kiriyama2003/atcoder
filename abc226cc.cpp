#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    
    vector<ll> t(n);            //時間
    vector<vector<int>> a(n);   //必要な技番号
    vector<int> k(n);           //数

    rep(i,n){
        cin>>t[i]>>k[i];
        rep(j,k[i]){
            int num;    cin>>num;
            a[i].push_back(num-1);
        }
    }

    vector<bool> used(n,false);
    used[n-1]=true;
    ll ans=0;

    for(int i=n-1;i>=0;i--){
        if(used[i]){
            ans+=t[i];
            rep(j,k[i]) used[a[i][j]]=true;
        }
    }
    cout<<ans<<endl;
    

    return 0;
}