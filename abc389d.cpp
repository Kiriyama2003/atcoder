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
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    ll r;   cin>>r;
  
    auto inside = [&](ll x, ll y) {
      //外側なら1を返す
      return (x*2+1)*(x*2+1)+(y*2+1)*(y*2+1) <= (2*r)*(2*r);
    };
  
    ll ans = 0, x = 0;
    
    for (ll y = r; y >= 0; y--) {
        //xはそのまま維持
        //y= r, r-1,  .. ,0


        //もし入っていないなら, 0が返されるから, x++が実行されない
        while(inside(x+1,y)) x++;

        ans += x;
    }

    ans *= 4;
    ans++;
    cout<<ans<<endl;    

    return 0;
}