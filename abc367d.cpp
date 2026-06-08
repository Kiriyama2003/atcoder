#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int N,M;   cin>>N>>M;

    vector<int> A(N);
    for (int i=0;i<N;i++) cin>>A[i];

    // 累積和の剰余をカウントするためのマップ
    unordered_map<int, int> remainderCount;
    remainderCount[0] = 1; // 初期状態を考慮

    int cumulativeSum = 0;
    int count = 0;

    // 累積和を一周分計算し、剰余をマップで管理
    for (int i = 0; i < N; i++) {
        cumulativeSum += A[i];
        int remainder = cumulativeSum % M;
        if (remainder < 0) remainder += M;  // 負の剰余を避ける

        // この剰余が既に出現していれば、その数だけ組み合わせがある
        count += remainderCount[remainder];
        
        remainderCount[remainder]++;
    }

    // 円環の性質を考慮して、もう一周計算する
    cumulativeSum = 0;
    for (int i = 0; i < N; i++) {
        cumulativeSum += A[i];
        int remainder = cumulativeSum % M;
        if (remainder < 0) remainder += M;

        remainderCount[remainder]--;
        count += remainderCount[remainder];
    }

    cout<<count<<endl;

    return 0;
}
