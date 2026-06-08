#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<ll> lefts,rights;
    rep(i,n) {
        int l,r;    cin>>l>>r;
        lefts.push_back(l); rights.push_back(r);
    }
       
    sort(all(lefts)); sort(all(rights));

    int cnt=0;
    ll ans= n*ll(n-1)/2;
    for(auto aa:lefts){
        while(rights[cnt]<aa) cnt++;
        ans-=cnt;
    }
    cout<<ans<<endl;
    return 0;

}