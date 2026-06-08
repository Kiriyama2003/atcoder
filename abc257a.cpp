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
    int n,x;    cin>>n>>x;

    // 0       1        2       'A'に足す数
    //1~n,   n+1~2n, 2n+1~3n   ↓-1すると
    //0~n-1, n~2n-1, 2n~3n-1    ↓/nする
    //0       1        2
    
    int y=(x-1)/n;
    cout<<char('A'+y)<<endl;

    /*
    string s;
    //文字について
    for(int i=0;i<26;i++){
        //n文字追加
        for(int j=0;j<n;j++) s.push_back('A'+i);
    }
    cout<<s[x-1]<<endl;*/



    return 0;
}