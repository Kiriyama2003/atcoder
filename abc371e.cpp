#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
ll c2(ll n){return n*(n-1)/2;}
int main() {
    int n;  cin>>n;     //2e5
    vector<int> a(n);
    rep(i,n) cin>>a[i],a[i]--;

    vector<vector<int>> is(n);
    rep(i,n) is[a[i]].push_back(i);

    ll ans=0;
    rep(x,n){
        ll sx=0;
        {
            is[x].push_back(n); //一番後ろの要素対策
            int pre=-1;         //一番前の要素対策
            for(int i:is[x]){
                sx+= c2(i-pre);
                pre=i;
            }
        }

        //c2(n+1) := 全組み合わせ
        //sx      := xを含まない区間の数
        ans += (c2(n+1) -sx);
    }

    cout<<ans<<endl;
    return 0;
}