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
    //n人の候補者　自分の票より多い候補者が, m人未満なら当選　合計k票
    int n, m; ll k; cin>>n>>m>>k;
    

    vector<ll> A(n);    rep(i,n) cin >> A[i];

    //必ず全員当選する
    if(n == m){rep(i,n){cout<<0<<' ';} cout<<endl; return 0;}

    vector<ll> a=A;         sort(all(a));               //昇順ソート
    vector<ll> s(n+1);      rep(i,n) s[i+1]=s[i]+a[i];  //累積和
    ll remain = k;      rep(i,n) remain -= a[i];        //残りの票
    map<int,ll> ans;    //答えを格納
    rep(i,n) {
        auto judge = [&](ll x) {
            //現在の合計
            ll y = a[i]+x;

            //自分が現在yだから, y以下のもので, 

            //自分以上, 最小の番号(0-index) == 自分以下の個数
            int r = upper_bound(a.begin(), a.end(), y+1)-a.begin();

            //自分以下のが, (n-m)以上なら当選
            //==自分以下のが, (n-m)未満なら, 不合格
            int l = n-m;    

            if(r < l) return false;
            //そもそも+xして, 合格範囲でないなら, 以下は考える必要がない。
            //以下では, 自分より下の票のやつらが, プラスされて自分より上に着て, 当選できなくなることを懸念している
            else{
                ll need = (y+1)*(r-l) - (s[r]-s[l]);

                //納得
                if(l <= i && i < r) need = need + a[i] - a[l-1];
                return need > remain-x;
            }
        };

        ll ac=remain+1,wa=-1;
        while(wa+1 != ac){
            ll wj = (ac+wa)/2;
            if(judge(wj)) ac = wj;
            else wa = wj;
        }

        if(ac == remain+1) ac=-1;
        ans[a[i]]=ac;
    }

    rep(i,n){cout<<ans[A[i]]<<' ';} cout<<endl;
    return 0;
}