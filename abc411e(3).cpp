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
ll mod = 998244353LL;
ll inv = 166374059LL;
//1/6をmodしたもの。今回分数は固定なので定数としておく。

template <typename T>
struct ST{//双対セグメント
    vector<T>num;
    int siz;

    ST(int n){
        int x = 1;
        while(n > x) x <<= 1;
        
        siz = x;
        num = vector<T> ((x<<1),1LL);//全部１にする
        num[siz-1] = 0;//0になる確率は0
    }

    void Update_sub(int n,int m,T i,int k,int l,int r){
        //範囲に確率をかけていく。
        if(r <= n || m <= l) return; //範囲外は見ない
        if(n <= l && r <= m){//完全な範囲内は掛ける
            num[k] *= i;
            num[k] %= mod;//modも忘れずに
            return;
        }

        //下の要素を確認
        k *= 2;
        Update_sub(n,m,i,k+1,l,(l+r)/2);
        Update_sub(n,m,i,k+2,(l+r)/2,r);
        return;
    }

    //外から呼びためだけ
    void Update(int n,int m,T i){
        //n番目以上m番目未満の範囲に確率iをかける。
        Update_sub(n,m,i,0,0,siz);                
    }

    
    T Serch(int n){
        //確率を上に上に掛けていく
        int now = n + siz- 1;
        ll ans = num[now];

        while(now != 0){
            now = (now-1)/2;
            ans *= num[now];
            ans %= mod;
        }

        return ans;
    }
};

int main(){
    int n;  cin >> n;

    vector<vector<ll>>dc (n,vector<ll>(6));//さいころごとに目を管理

    set<ll> st;
    st.insert(0);
    rep(i,n){
        rep(j,6){
            cin >> dc[i][j];
            st.insert(dc[i][j]);
        }

        sort(all(dc[i]));   //各サイコロは, 昇順
    }

    map<ll,int>nm;
    //それぞれの目が全体で何番目に小さい数かを管理
    //これで数値を圧縮できる。
    int cnt = 0;
    for(auto x:st){
        nm[x] = cnt;
        cnt++;
    }

    

    ST<ll> tree(st.size());//本丸・双対セグメントツリー
    for(auto vec:dc){
        tree.Update(0,nm[vec[0]],0LL);
        //一番小さい数字未満の数字は確率0
        
        for(ll i=0;i<6;i++){
            if(vec[i+1] != vec[i]){
                //変化のタイミングで更新
                ll prb = inv * (i+1LL);
                //vec[i]以上vec[i]未満の数が出る確率は(i+1)/6
                prb %= mod;
                tree.Update(nm[vec[i]],nm[vec[i+1]],prb);
            }
            //最大の数以降は確率１なので何もしない。
        }
    }

    ll ans = 0,bef = 0;
    for(auto x:st){
        ll p = tree.Serch(nm[x]);//各数字ごとに以下の確率を求める
        ll q = p + mod - bef;//ひとつ前を引きNのみの確率に
        q %= mod;
        bef = p;    //更新

        q *= x;
        q %= mod;

        ans += q;   //数字をかけて足し合わせる。
        ans %= mod;
    }
    
    cout << ans << endl;
}
