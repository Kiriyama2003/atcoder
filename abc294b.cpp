#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    
    /*解法1
    int h,w;        cin>>h>>w;
    vector<vector<int>> s(h,vector<int>(w));

    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++){
            cin>>s[i][j];
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]==0) cout<<'.';
            else {
                char st='A'+ s[i][j]-1;
                cout<<st; 
            }
        }
        cout<<endl;
    }*/

    /*解法2
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H,W;       cin>>H>>W;
    for (int i=0;i<H;i++) {
        string S(W,'.');
        for (int j=0;j<W;j++) {
            int x;      cin>>x;
            if(x!=0) S[j]='A'+x-1;
        }
        cout<<S<<"\n";
    }*/
    return 0;
}