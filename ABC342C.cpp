#include<bits/stdc++.h>
using namespace std;
int main() {
    long long N,Q;  string S;
    cin>>N>>S>>Q;
    //vector<pair<char,char>> C(Q);
    for(int i=0;i<Q;i++){
        char a,b;   cin>>a>>b;
        for(int j=0;j<S.size();j++){
            if(a==S[j]){
                S[j]=b;
            }
        }
    }
    cout<<S<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long N, Q; string S;
    cin >> N >> S >> Q;

    vector<int> charMap(26, -1); // 各文字のマッピングを保持する配列

    // 文字の置換を行う
    for(int i = 0; i < Q; i++) {
        char a, b;
        cin >> a >> b;

        int indexA = a - 'A'; // 文字 a のインデックスを計算
        int indexB = b - 'A'; // 文字 b のインデックスを計算

        // 文字 a を文字 b に置き換える
        for(int j = 0; j < N; j++) {
            if(S[j] == a) {
                S[j] = b;
            }
        }

        // 文字 a のマッピングを更新
        charMap[indexA] = indexB;
    }

    cout << S << endl;
    return 0;
}*/