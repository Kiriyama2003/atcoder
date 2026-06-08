#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int n;
vector<int> t,k;
vector<vector<bool>> a;
vector<bool> used;

void waza(int num){
    used[num]=true;

}
int main(){
    cin>>n;
    
    t.resize(n); k.resize(n); a.resize(n); used.resize(n,false);
    
    rep(i,n){
        cin>>t[i]>>k[i];
        rep(j,k[i]){
            int num;    cin>>num;
            a[i].push_back(num);
        }
    }

    waza(n-1);

    ll ans=0;
    rep(i,n) if(used[i]) ans+=t[i];
    cout<<ans<<endl;

    return 0;
}