#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
    vector<long long> L = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111, 11111111111LL, 111111111111LL}; //12コ
    vector<long long> P;

    //i,j,k={0,0,0},{0,0,1},{0,0,12}
    for (size_t i = 0; i < L.size(); ++i) {
        for (size_t j = i; j < L.size(); ++j) {
            for (size_t k = j; k < L.size(); ++k) {
                P.push_back(L[i] + L[j] + L[k]);
            }
        }
    }
    sort(P.begin(), P.end());
    int N; cin >> N;
    cout<< P[N - 1] <<endl;
    return 0;*/

    //ノート見たほうがいい
    int n; cin >> n;
    //各桁において, 1は0個以上 ∧ 2は0個以上 ∧ 3は1個以上
    //d=1のときは,1桁
    //d=2のときは,2桁
    //d=3のときは,3桁
    for(int d = 1; d <= 12; d++) {
        for(int a = d - 1; a >= 0; a--) {
        for(int b = d - a - 1; b >= 0; b--) {
            int c = d - a - b;
            if(--n == 0) {  //nを1ずつ引いていく
            cout << string(a, '1') + string(b, '2') + string(c, '3') << endl;
            return 0;
            }
        }
        }
    }
}

