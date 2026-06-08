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
int main() {
    ll n,rest,week; cin>>n>>rest>>week;
    vector<ll> d(n);
    rep(i,n){cin>>d[i];  d[i]%=(rest+week);}

    //解法1
    //sort(all(d));   
    //rep(i,n) d.push_back(d[i]+(rest+week));

    //解法2 解法1をわかりやすく
    sort(all(d));
    d.erase(unique(all(d)),d.end());    //なくて全然いい
    d.push_back(d[0]+(rest+week));      //x軸の一番左と, 一番右を検討するため

    rep(i,(int)d.size()-1){
        if((d[i+1] - d[i])-1 >= week){cout<<"Yes"<<endl; return 0;}
        //予定の隣の間隔が, 平日以上の日数があるならば

        //休日の範囲でやりたいなら
        //https://atcoder.jp/contests/abc347/submissions/51886215
    }
    cout<<"No"<<endl;
    return 0;
}