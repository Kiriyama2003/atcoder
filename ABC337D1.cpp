#include<bits/stdc++.h>
using namespace std;
int main(void){
    string a[1]={"aaa"};
    cout<<a[0];
    int H, W, K; cin >> H >> W >> K;
    //条件:HW<=2e5,K<=max(H,K)より
    //H,W,kの最大値:2e5
    //vector<string> S(200001);
    string S[200001];   //配列がなぜか使えず
    int X[200001], D[200001];
    
    

    for(int i = 1; i <= H; i++) cin >> S[i];
    for(int i = 1; i <= H; i++) S[i] = "#" + S[i]; 
    //添字を解説本文と揃えるためだけの便宜上の処理です
    //S[1][0]=# S[2][0]=#　となる

    int ans = 1e9;

    //横方向, 1行~H行まで
    for(int y = 1; y <= H; y++){
        //各行, 1~Wまで
        for(int i = 1; i <= W; i++){
            X[i] = X[i-1];  
            //i(s[i]を含む)までのxの個数
            D[i] = D[i-1];
            //i(s[i]を含む)までの.の個数
            if(S[y][i] == 'x') X[i]++;
            if(S[y][i] == '.') D[i]++;
        }

        for(int i = 1; i <= W-K+1; i++){
            if(X[i+K-1]-X[i-1] == 0) ans = min(ans, D[i+K-1]-D[i-1]);
        }
    }

    //縦方向の操作
    for(int x = 1; x <= W; x++){
        for(int i = 1; i <= H; i++){
            X[i] = X[i-1], D[i] = D[i-1];
            if(S[i][x] == 'x') X[i]++;
            if(S[i][x] == '.') D[i]++;
        }
        for(int i = 1; i <= H-K+1; i++){
            if(X[i+K-1]-X[i-1] == 0) ans = min(ans, D[i+K-1]-D[i-1]);
        }
    }
  
    if(ans > K) ans = -1;
    cout << ans << endl;
    return 0;
}