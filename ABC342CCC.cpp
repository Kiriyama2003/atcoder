#include<bits/stdc++.h>
using namespace std;
int main() {
    long long N,Q;  string S;
    cin>>N>>S>>Q;
    //vector<pair<char,char>> C(Q);
    for(int i=0;i<Q;i++){
        char a,b;   cin>>a>>b;
        for (long long pos = S.find(a); pos != string::npos; pos = S.find(a, pos + 1)) {
            S[pos] = b;
        }
    /*
        long long pos =S.find(a);
        S[pos]=b;

        // 最初の文字が見つかったので1からスタート
        while ((pos = S.find(a, pos + 1)) != std::string::npos) {
            S[pos]=b;
        }*/
    }
    cout<<S<<endl;
    return 0;
}