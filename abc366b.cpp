#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n;  cin>>n;
    vector<vector<char>> s(100,vector<char>(100,'*'));
    int max_num=0;  //入力の行の　最大の文字数
    rep(i,n) {
        string ss;   cin>>ss;
        rep(j,(int)ss.size()) s[i][j]=ss[j];
        max_num=max(max_num,(int)ss.size());
    }

    rep(i,max_num){
        string kara;
        for(int j=n-1;j>=0;j--){
            //if(s[j][i]!='*') kara+=s[j][i];
           //else kara+='*';
           kara+=s[j][i];
        }
        while(!kara.empty() && kara.back()=='*'){
            kara.pop_back();
        }
        cout<<kara<<endl;
    }
    return 0;
}
