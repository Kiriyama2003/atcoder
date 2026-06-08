#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define REP(i, n) for (int i = 1; i <= (n); ++i)
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<int> digit_count(12, 0), num_digits(n);
    vector<mint> pow10(12);
    pow10[0] = 1;
    for (int d = 1; d <= 11; d++) pow10[d] = pow10[d - 1] * 10;

    mint total_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_a += a[i];

        ll tmp = a[i];
        int digits = 0;
        while (tmp) {
            digits++;
            tmp /= 10;
        }
        digit_count[digits]++;
        num_digits[i] = digits;
    }

    mint total_s = 0;
    for (int d = 1; d <= 11; d++) {
        total_s += pow10[d] * digit_count[d];
    }

    mint sum_a10d = 0;
    for (int i = 0; i < n; i++) {
        sum_a10d += a[i] * pow10[num_digits[i]];
    }

    mint ans = total_s * total_a - sum_a10d + (n - 1) * total_a;
    cout << ans.val() << endl;

    return 0;
}
