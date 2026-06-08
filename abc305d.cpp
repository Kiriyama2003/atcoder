#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,q;  cin>>n;
    vector<ll> a(n),fa(n);
    rep(i,n) cin>>a[i];

    //n=7
    //      寝<=>起   寝<=>起   寝<=>起
    //a= {0 240 720 1320 1440 1800 2160}
    //fa={0   0 480  480  600  600  960}

    //fa[i]:=a[i]分までに何分寝たか
    for(int i=1;i<n;i++){
        if(i%2==0) fa[i] = fa[i-1]+ (a[i]-a[i-1]);
        else fa[i]=fa[i-1];
    }

    //f(x):=x分までに何分寝たか
    auto f=[&](ll x)->ll{
        //公式解答, 理解不能
        //int j=upper_bound(begin(a)+1,end(a),x) -begin(a) -1;
        //return fa[j] + (fa[j+1]-fa[j]) / (a[j+1]-a[j]) * (x-a[j]);

        int i=lower_bound(all(a),x)-a.begin()-1;
        //xの直前の

        if(i<0) return 0;
        //x==0の時, a.begin() - a.begin() -1 で, -1になる


        int res=fa[i];
        if(i%2==1) res+= x-a[i];    //直前が奇数なら, 現在は寝ている最中
        return res;
    };


    cin>>q;
    rep(i,q){ll l,r; cin>>l>>r;  cout<<f(r)-f(l)<<endl;}
    return 0;
}