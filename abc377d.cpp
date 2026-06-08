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

//尺取り法　rを全部倒す
int main(void){
    int n,m;    cin>>n>>m;

    vector<int> maxL(m+1,-1);
    rep(i,n) {
        int l,r;    cin>>l>>r;
        maxL[r] = max(maxL[r], l);
    }

    ll ans = 0;
    int l = 1;  //

    //右rを固定して, 左lを動かしていく
    for(int r = 1; r <= m; r++){
        //現在lのより, maxL[r]が右にあれば
        //lは, r-1においてokのところ
        if(l<=maxL[r]) l = maxL[r]+1;
        ans += r-l+1;
    }
    cout<<ans<<endl;
    return 0;
}