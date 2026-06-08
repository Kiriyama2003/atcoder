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


  
    fenwick_tree<ll> d(n+1);

    rep(i,n) {
        int a;  cin>>a;
        d.add(i,a);
        d.add(i+1,-a);
    }

    rep(mi,m) {
        int b;  cin>>b;
        //箱[b]に入っている
        ll x = d.sum(0,b+1);

        d.add(b,-x);
        d.add(b+1,+x);

        ll c = x/n;     //何周するか
        
        d.add(0,c);
        d.add(n,-c);

        x %= n;         //あまり
        b++; b%=n;

        
        if(b+x < n){
            d.add(b,1);
            d.add(b+x,-1);
        }
        else {
            d.add(b,1);
            d.add(n,-1);

            d.add(0,1);
            d.add(b+x-n,-1);
        }
    }

    rep(i,n) cout<<d.sum(0,i+1)<<' ';
    cout<<endl;
    return 0;
}