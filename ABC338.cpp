#include<bits/stdc++.h>
using namespace std;
int main(void){
    string S; cin >> S;
    int a[128] = {};    //すべての要素=0 a[0]=a[127]まで
    for (char c: S) {   //文字cには, 文字列Sをすべて入れてく
        ++a[c];
    }

    char ans = 'a';
    for (char c = 'b'; c <= 'z'; ++c) {
        if (a[c] > a[ans]) {
            ans = c;
        }
    }
    cout << ans << endl;
    return 0;
}