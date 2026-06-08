#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,m;  cin>>n>>m;
    vector<ll> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];
    sort(all(a));   sort(all(b));


    vector<bool> used(n,false);
    int res=0;
    int now=0;
    rep(i,n){
        for(int j=now;j<m;j++){
            if(used[i]) continue;
            if(a[i] <= b[j]){
                res++;
                used[i]=true;
                now=j+1;
                break;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}