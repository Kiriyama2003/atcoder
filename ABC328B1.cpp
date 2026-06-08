#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;  cin >> N;
    vector<int> D(N);
    for(auto&& d : D)cin >> d;

    //ありえるゾロ目の日付
    vector<pair<int, int>> zorome;
    for(int i = 1; i <= 9; ++i){
        zorome.emplace_back(i, i);
        //(1,1)(2,2)(3,3)....(9,9)
        zorome.emplace_back(i, i * 11);
        //(1,11)(2,22)(3,33).....(9,99)
        zorome.emplace_back(i * 11, i);
        //(11,1)(22,2)(33,3).....(99,9)
        zorome.emplace_back(i * 11, i * 11);
        //(11,11)(22,22)(33,33).....(99,99)
    }

    int ans=0;
    for(const auto& [month, day] : zorome)
        if(month <= N && day <= D[month - 1])
            ++ans;

    cout << ans << endl;
    
    return 0;
}