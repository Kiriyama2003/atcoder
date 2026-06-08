#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//lower_boundによる

int main(){
    ll h,w,n;   cin>>h>>w>>n;

    vector<int> a(n),b(n);
    rep(i,n) cin>>a[i]>>b[i];

    //行と列は, 完全に独立している

    vector<int> aa=a,bb=b;
    sort(all(aa));  sort(all(bb));
    aa.erase(unique(all(aa)),aa.end());
    bb.erase(unique(all(bb)),bb.end());
    rep(i,n) a[i]=lower_bound(all(aa),a[i])-aa.begin();
    rep(i,n) b[i]=lower_bound(all(bb),b[i])-bb.begin();


    rep(i,n) cout<<a[i]+1<<" "<<b[i]+1<<endl;
    return 0;
}