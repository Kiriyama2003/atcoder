#include<bits/stdc++.h>
using namespace std;
int main() {
    //B問題だから, 単純ではない　なにかを書いて考える
    //pow関数は, 少数型だから　正確ではない

    long long B;    cin >> B;
    for (int A = 1; A <= 15; A++) {
        long long x = 1;
        for (int i = 0; i < A; i++) x *= A;
        if (x == B) {
        cout << A << endl;
        exit(0);
        }
    }
    cout << "-1" << endl;
    return 0;
}