#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  ll m;   cin>>n>>m;
    vector<int> a(n);
    rep(i,n) cin>>a[i];


    //x：補助金の上限
    //条件を満たすとき, 1を出力
    auto f=[&](int x)->bool{
        ll s=0;
        rep(i,n) s+=min(x,a[i]);
        return s<=m;
    };

    const int INF=2e9;

    //交通費を全員全額補助しても, 補助金総額mが足りる場合
    if(f(INF)==1) cout<<"infinite"<<endl;
    else{
        //accept：絶対●　　wronganswer：絶対×
        int ac=0,wa=INF;

        //隣り合ったら終わり
        //ac<waにはならない
        while(!(ac+1==wa)){
            int wj=(ac+wa)/2;

            //wjがac側にあるとき acに真ん中をだいにゅ
            if(f(wj)==1) ac=wj;
            //wjがwa側にあるとき　waに真ん中を代入
            else wa=wj;
        }
        cout<<ac<<endl;
    }
    
    return 0;
}

