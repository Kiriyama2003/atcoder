#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N,Q;    cin>>N>>Q;
    vector<ll> a(N);
    rep(i,N) cin>>a[i];
    sort(all(a));

    rep(iq,Q){
        ll b,k; cin>>b>>k;
        auto f=[&](int wj)->bool{
            int l = b-wj, r = b+wj;
            int li = lower_bound(a.begin(), a.end(), l) - a.begin();
            int ri = upper_bound(a.begin(), a.end(), r) - a.begin();
            //int ri = lower_bound(a.begin(), a.end(), r + 1) - a.begin();

            return ri-li >= k;
        };

        int wa = -1, ac = 2e8;  //絶対アリエナイところを入れる
        while(wa+1!=ac){
            int wj = (wa+ac)/2;
            //bを中心にwjの範囲で
            if(f(wj)) ac = wj;
            else wa = wj;
        }
        cout<<ac<<endl;
    }
    return 0;
}