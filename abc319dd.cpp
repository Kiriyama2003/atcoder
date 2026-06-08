#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main() {
    int n, m;    cin>>n>>m;
    
    // n個の単語の文字数
    vector<ll> L(n);
    ll L_max=0;
    rep(i,n){ 
        cin>>L[i];    L_max=max(L_max,L[i]);
    }

    ll lower=L_max-1;      // 1行の文字数は, max(L[i])以上
    ll upper = accumulate(all(L), 0LL) + (n-1);
    // 1行の文字数は, ΣL[i] + (n-1)以下

    while (lower+1 < upper) {
        ll middle = (lower+upper)/2;
        
        int rows = 1;    // 今の行数
        ll length = 0;  // 現在の行の文字数
        
        for (int i = 0; i < n; i++) {
            if (length + L[i] > middle) {
                rows++;
                length = L[i];  // 新しい行を開始
            } else {
                length += L[i];  // 現在の行に単語を追加
            }
            if (i < n - 1) length++; // 単語間の空白を加える
        }
        
        if (rows > m) lower = middle;  // 縦幅が足りていない
        else upper = middle;          // 縦幅が足りている
    }
    cout << upper << endl;
    
    return 0;
}
