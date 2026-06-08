/*#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n; cin>>n;

    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> ans;

/*
    for(int i=1;i<=n;i++) if(a[i] == -1) ans.push_back(i);

    for(int j=0;j<n;j++){
        for(int i=1;i<=n;i++){
            if(a[i]==ans[j]) ans.push_back(i);
        }
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;

    // B[i] := 人 i の直後の人（いなければ N）
    //人1,2,3,4,5　それぞれA1 A2 A3 A4
    vector<int > B(N, N); 
    int front;

    //ここで添え字と出力を反転　
    for(int i = 0; i < N; ++i){
        int A;
        cin >> A;
        --A; // 0-indexed に直しておく
        if(A < 0) front = i;
        else B[A] = i; // 人 i の直前が人 A ⇔ 人 A の直後が人 i
    }

    // N になるまで（= 直後の人がいなくなるまで）直後に移動を繰り返す
    //なぜ front<N　なのかは, B[]の定義を見ろ
    while(front < N){ 
        cout << front + 1 << " ";
        front = B[front];
    }
    cout << endl;

    return 0;
}

