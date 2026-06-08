#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<int> D(n);
    for(int i=0;i<n;i++) cin>>D[i];
    // for (auto &&d : D) cin >> d;

    int ans=0;
    
    //1月からN月まで
    for (int m = 1; m <= n; ++m) {
        string month = to_string(m);

        //1日から？日まで
        for (int d = 1; d <= D[m - 1]; ++d) {
            string date = month + to_string(d);
            //set<char>(date.begin(), date.end()
            //並び替え,重複を許さないため, 異なる文字だけ残る
            //set()==1 要素数が1だったら
            if (size(set<char>(date.begin(), date.end())) == 1) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}