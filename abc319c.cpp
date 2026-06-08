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
//https://atcoder.jp/contests/abc319/tasks/abc319_c
//https://www.youtube.com/watch?v=26jzAnxw-S4&t=1719s
int main(void){
    vector<int> c(9);
    rep(i,9) cin>>c[i];

    vector<int> p(9);
    rep(i,9) p[i]=i;
    //p[i] iはp[i]番目に開く

    int cnt=0,tot=362880;
    //totは9!
    do{
        bool ok = true;
        auto f = [&](int i, int j, int k) {
            vector<P> d;
            d.emplace_back(p[i],c[i]);
            d.emplace_back(p[j],c[j]);
            d.emplace_back(p[k],c[k]);
            sort(d.begin(), d.end());
            if(d[0].second == d[1].second) ok = false;
        };
        // 0 1 2
        // 3 4 5
        // 6 7 8

        f(0,1,2);
        f(3,4,5);
        f(6,7,8);
        f(0,3,6);
        f(1,4,7);
        f(2,5,8);
        f(0,4,8);
        f(2,4,6);
        if(ok) cnt++;
        //tot++;
    }while(next_permutation(all(p)));
    double ans = (double)cnt/tot;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}