#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int N;  cin>>N;
    vector<ll> a(N);

    rep(i,N) cin>>a[i];

    vector<int> cnt(7,0);
    // a[i] を 7 で割った余りに置き換えそれぞれの個数を数える
    rep(i,N) cnt[a[i] % 7] ++;

    vector<tuple<int, int, int>> mod7;
    // (i + j + k) が 7 の倍数となるような組み合わせを全列挙する （i ≤ j ≤ k）
    rep(i,7){
        for(int j=i;j<7;++j) {
            for(int k=j;k<7;++k) {
                if((i + j + k)%7==0) 
                    mod7.emplace_back(i, j, k);
                    // i<=j<=k
            }
        }
    }

    ll ans = 0;
    for(auto [i, j, k] : mod7) {
        //3枚とも同じあまり　
        // cnt[i] C 3  
        if (i == j && j == k) { // cnt[i]_C_3
            ans += cnt[i] * (cnt[i] - 1) * (cnt[k] - 2) / 6;
        
        } else if (i == j) { // cnt[i]_C_2 * cnt[k]
            ans += (cnt[i] * (cnt[i] - 1) / 2) * cnt[k];




        } else if (j == k) { // cnt[k]_C_2 * cnt[i]
            ans += (cnt[j] * (cnt[j] - 1) / 2) * cnt[i];
        
        //全部余りが違う
        }else ans += cnt[i] * cnt[j] * cnt[k];
    }

    cout<<ans<<endl;
    return 0;
}