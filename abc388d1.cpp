#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N+1); // 1～N で使う
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    ll d = 0;
    multiset<ll> donors;
    ll pending = -1;

    // year=1 ～N
    for(int year=1; year<=N; year++){
        // 前の年に大人になった子を donors に入れる
        if(pending >= 0 && pending > d){
            donors.insert(pending);
        }
        pending = -1;

        // 石尽きた人を除外
        while(!donors.empty()){
            auto it = donors.begin();
            if(*it <= d) donors.erase(it);
            else break;
        }

        // 既存大人の人数
        ll M = donors.size();

        // 今回大人になるのは A[year]
        A[year] += M;

        if(M>0){
            d++;
            // d更新後の除外
            while(!donors.empty()){
                auto it = donors.begin();
                if(*it <= d) donors.erase(it);
                else break;
            }
        }

        // 今大人になった子は今年寄付しない → pending
        pending = A[year];
    }

    // ループ後、最後の pending を donors に入れるか
    if(pending >= 0 && pending > d){
        donors.insert(pending);
    }

    while(!donors.empty()){
        auto it = donors.begin();
        if(*it <= d) donors.erase(it);
        else break;
    }

    // 出力
    for(int i=1; i<=N; i++){
        ll ans = A[i] - d;
        if(ans<0) ans=0;
        cout << ans << (i==N ? '\n':' ');
    }
    return 0;
}
