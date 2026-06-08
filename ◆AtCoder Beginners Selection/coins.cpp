#include <iostream>
#include <vector>
using namespace std;

int countWays(int A, int B, int C, int X) {
    // dp[i] は i 円を達成する方法の数を記録する
    vector<int> dp(X + 1, 0);
    dp[0] = 1; // 0 円を達成する方法は 1 通り (何も選ばない)

    // 500 円玉を使う
    for (int i = 0; i <= A; ++i) {
        int value = 500 * i;
        if (value > X) break;
        for (int j = X; j >= value; --j) {
            dp[j] += dp[j - value];
        }
    }

    // 100 円玉を使う
    for (int i = 0; i <= B; ++i) {
        int value = 100 * i;
        if (value > X) break;
        for (int j = X; j >= value; --j) {
            dp[j] += dp[j - value];
        }
    }

    // 50 円玉を使う
    for (int i = 0; i <= C; ++i) {
        int value = 50 * i;
        if (value > X) break;
        for (int j = X; j >= value; --j) {
            dp[j] += dp[j - value];
        }
    }

    return dp[X];
}

int main() {
    int A,B,C,X;    cin>>A>>B>>C>>X;

    int result = countWays(A, B, C, X);
    cout<<result<<endl;
    return 0;
}
