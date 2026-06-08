#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int Q;  cin >> Q;

    unordered_map<int, int> bag;  // ボールの種類とその数を管理するマップ
    int unique_count = 0;  // ボールに書かれた整数の種類数を管理

    for (int i = 0; i < Q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;  cin >> x;
            if (bag[x] == 0) unique_count++;
            // 新しい種類が追加されたら種類数を増やす
            bag[x]++;  // ボールを袋に追加

        } else if (type == 2) {
            int x;  cin >> x;
            bag[x]--;  // ボールを袋から取り出す

            if (bag[x] == 0) unique_count--; 
            // 全てのボールが取り出されたら種類数を減らす

        }else if(type == 3) {
            cout<<unique_count<<endl;  // 現在の種類数を出力
        }
    }

    return 0;
}
