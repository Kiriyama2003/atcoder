#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> h(n);
    for (ll i = 0; i < n; ++i) cin >> h[i];

    ll cnt = 0;
    ll now = 0; // 0: 通常攻撃, 1: 特殊攻撃, 2: 特殊攻撃2

    for (ll i = 0; i < n; ++i) {
        if (now == 1) {
            h[i] -= 4;
            cnt += 2;
        } else if (now == 2) {
            h[i] -= 3;
            cnt++;
        }
        now = 0;

        if (h[i] > 0) {
            cnt += (h[i] / 5) * 3;
            h[i] %= 5;

            if (h[i] == 1) {
                now = 1;
                cnt++;
            } else if (h[i] == 2) {
                now = 2;
                cnt += 2;
            } else if (h[i] > 2) {
                cnt += 3;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
