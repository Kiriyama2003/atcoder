#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
void chmin(int& a,int b){a=min(a,b);}
int main() {
    int n,m;    cin>>n>>m;
    vector<int> a(n),b(m);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];

    sort(all(a));   sort(all(b));
    int ans=1001001001;
    rep(i,n){
        //a[i]について
        auto it = lower_bound(all(b),a[i])-b.begin();

        if(it!=m) ans = min(ans,abs(b[it]-a[i]));
        it--;
        if(it!=-1) ans=min(ans,abs(b[it]-a[i]));
    }
    cout<<ans<<endl;

    return 0;
}