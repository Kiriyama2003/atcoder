#include <bits/stdc++.h>
using namespace std;

bool solve() {
    vector<vector<int>> A(9,vector<int>(9));
    for(int i=0;i<9;++i) for(int j=0;j<9;++j) cin>>A[i][j];
    
    for(int i = 0; i < 9; ++i) {
        set<int> S;
        for(int j=0;j<9;++j) S.insert(A[i][j]);
        if (S.size()!=9) return false;
    }
    for(int i=0;i<9;++i) {
        set<int> S;
        for(int j=0;j<9;++j) S.insert(A[j][i]);
        if (S.size()!=9) return false;
    }
    
    for(int i=0;i<9;i+=3) {
        for(int j=0;j<9;j+=3) {
            set<int> S;
            for (int i2=i;i2<i+3;++i2) {
                for (int j2=j;j2<j+3;++j2) {
                    S.insert(A[i2][j2]);
                }
            }
            if (S.size()!=9) return false;
        }
    }
    return true;
}

int main() {
    cout << (solve() ? "Yes" : "No") << endl;
}