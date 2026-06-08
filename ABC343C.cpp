#include<bits/stdc++.h>
using namespace std;

bool check(long long n) {
    string s = to_string(n);
    string t = s;
    //文字列を反転して, 同じなら, 回文
    reverse(t.begin(), t.end());
    //文字列s == 文字列t　なら　1
    return s == t;
}

int main() {
    long long n;    cin >> n;
    long long ans = 0;
    for (long long i=1;i*i*i<=n;i++) {
        if (check(i*i*i)) ans=i*i*i;
    }
    cout << ans << '\n';
    return 0;
}