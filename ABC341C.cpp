#include<bits/stdc++.h>
using namespace std;
int main() {
/*入力フェーズにての試行
    int h,w,n; cin>>h>>w>>n;
    string T; cin>>T;
   
    vector<vector<char>> S(h, vector<char>(w));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>S[i][j];
        }
    }
    cout<<endl;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            std::cout << S[i][j] ;
        }
        std::cout << std::endl;
    }*/

    int h,w,n; cin>>h>>w>>n;
    string T; cin>>T;
   
    vector<string> S(h);
    for(int i=0;i<h;i++) cin>>S[i];
    int cnt=0;

    
    for(int i=1;i<h-1;i++){
        for(int j=1;j<w-1;j++){
            if(S[i][j] == '.'){
                int now_i=i,now_j=j;
                for(int k=0;k<T.size();k++){
                    if(T[k]=='R') now_j++;
                    else if(T[k]=='L') now_j--;
                    else if(T[k]=='U') now_i--;
                    else now_i++;
                    if(S[now_i][now_j]=='#') break;

                    if(k==T.size()-1) cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}