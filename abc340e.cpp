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
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    int n,m;    cin>>n>>m;
  
    fenwick_tree<ll> d(n+1);    //累積だから
    //区間に対して足しこむ
    auto add = [&](int l, int r, ll x) {
        d.add(l,x);     //lにxを足し
        d.add(r,-x);    //rにxを引く
    };

    rep(i,n) {
        int a;  cin>>a;
        add(i,i+1,a);
        //iにaを足し, i+1にaをひく
    }

    rep(mi,m) {
        int b;  cin>>b;
        ll x = d.sum(0,b+1);
        add(b,b+1,-x);

        ll c = x/n;     //何周するか
        add(0,n,c);

        x %= n;         //あまり
        b++; b%=n;

        
        if(b+x < n) add(b,b+x,1);
        else {
            add(b,n,1);
            add(0,b+x-n,1);
        }
    }

    rep(i,n) cout<<d.sum(0,i+1)<<' ';
    cout<<endl;
    return 0;
}