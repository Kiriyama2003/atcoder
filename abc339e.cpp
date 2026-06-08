#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int op(int a, int b) { return max(a,b);}
int e() { return 0;}

int main(){
    int n,d;    cin>>n>>d;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    const int M = 500005;
    segtree<int,op,e> dp(M);
    
    rep(i,n) {
        
        //seg[k]　　：　a[i]まで見たときの値kが最後である数列
        int l = max(a[i]-d,0), 
            r = min(a[i]+d+1,M);
        
        //[l,r)の最大値に+1
        int now = dp.prod(l,r) + 1;
        dp.set(a[i], now);
    }
    //seg.all_prod()でもいい
    cout<<dp.prod(0,M)<<endl;
    return 0;
}