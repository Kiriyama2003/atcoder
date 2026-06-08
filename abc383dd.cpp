#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 素数列挙
vector<ll> Era(ll n) {
    vector<ll> res;
    vector<bool> isprime(n + 1, true);
    isprime[0] = isprime[1] = false;
    for (ll i = 2; i <= n; ++i) {
        if (isprime[i]) {
            res.push_back(i);
            for (ll j = i * 2; j <= n; j += i) isprime[j] = false;
        }
    }
    return res;
}

// 約数が9個の数をカウント
ll f(ll N) {
    ll cnt = 0;
    vector<ll> primes = Era(1100000);

    // 条件1: p^8
    for(ll p : primes) {
        if(p>100) break;
        ll power = 1;
        for(ll i = 0; i < 8; ++i) power *= p;
        if (power > N) break;
        cnt++;
    }

    // 条件2: p1^2 * p2^2
    for(ll i = 0;i < primes.size();++i) {

        ll p1_squared = primes[i] * primes[i];
        if(p1_squared > N) break; // p1^2 が N を超える場合

        for(ll j = i + 1; j < primes.size(); ++j) {
            ll p2_squared = primes[j] * primes[j];
            if (p2_squared > N) break;

            if(p2_squared > N/p1_squared) break;
                // オーバーフローを防ぐことができる
            if((ll)primes[i]*primes[i]*primes[j]*primes[j] > N) break;  //ダメ
            cnt++;
        }
    }

    return cnt;
}

int main() {
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
