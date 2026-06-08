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
int main(){
    int n,x;    cin>>n>>x;
    vector<P> s(n),t(n);
    rep(i,n){
        cin>>s[i].first>>s[i].second>>t[i].first>>t[i].second;
        //sの方がお得にする
        if (t[i].first*s[i].second > s[i].first*t[i].second)
            swap(s[i], t[i]);
    }

    //x円以下で, 各工程, m個以上作れるか
    auto f=[&](int m) {
        ll cost = 0;

        //n工程について
        rep(i,n) {
            ll now = 1e18;

            //t[i].first*j + s[i].first*k >= m になるような(j,k)を見つけたい
            //sを優先的に使うが, s以下の個数については, 個別に操作できない
            //sとtの最小公倍数を, s*tとすると, 
            rep(j,s[i].first) {
                //j個 機械tの個数


                //s側(効率のいいほう)で作る, 製品の個数
                int k = max( m - t[i].first*j , 0);

                //機械sが何個必要? k/s[i].first　の切り上げ
                k = (k + s[i].first - 1) / s[i].first;

                now = min(now, t[i].second*j + (ll)s[i].second*k);
            }
            cost += now;
        }
        if(cost>x) return false;
        else return true;
    };

    int ac=0, wa=x*100+1;
    while(ac+1 < wa) {
        int wj = (ac+wa)/2;
        if (f(wj)) ac = wj;
        else wa = wj;
    }
    cout<<ac<<endl;
    return 0;
}