#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n本のひも
    //クエリQ個
    //長さA以上B以下のひもの本数
    int n;
    cin >> n;
    vector<ll> L(n);
    for(int i=0;i<n;++i) cin>>L[i];
    
    // ひもの長さの配列をソート
    sort(all(L));
    
    int q;  cin>>q;
    while(q--) {
        ll A,B; cin>>A>>B;
        
        // A以上の最初の要素を指すイテレータを取得
        auto lower = lower_bound(all(L), A);
        // B以下の最後の要素の次を指すイテレータを取得
        auto upper = upper_bound(all(L), B);
        
        // 上限B以下でかつ下限A以上のひもの数を計算
        cout << upper-lower<< endl;
    }
    
    return 0;
}
