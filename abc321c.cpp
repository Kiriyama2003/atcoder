#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll k;   cin>>k;

    vector<ll> ans;

    //i= 0,000,000,010 ~ 1,111,111,111
    for(int i=2;i<(1<<10);i++){
        //i=2から　i=0は意味ない, i=1だと0bit目が立ち, 0が出る
        ll x=0;
        //各bitについて
        //1,000,000,000
        //0,100,000,000
        //0,010,000,000
        //0,001,000,000
        //0,000,100,000
        //0,000,010,000
        //0,000,001,000
        //0,000,000,100
        //0,000,000,010
        //0,000,000,001
        for(int j=9;j>=0;j--){
            //立っていれば
            if(i & 1<<j){
                x*=10;
                x+=j;
                //j==0：x+=10するが, x+=0である
            }
        }
        ans.push_back(x);
        //cout<<x<<" ";
    }
    sort(all(ans));
    cout<<ans[k-1]<<endl;
    return 0;
}