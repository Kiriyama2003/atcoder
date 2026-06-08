#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    string x;   int n;  cin>>x>>n; //n<=5e4

    map<char,int> alpha; //ある文字を, 番号の文字列に変換する際に使う関数
    rep(i,26) alpha[x[i]]=i;

    vector<string> s(n);    //|s| <= 10
    rep(i,n) cin>>s[i];

    map<string,string> mp;  //[返還後の数字の文字列 , 元の文字列]
    rep(i,n){
        string target=s[i] , new_word="";
        rep(j,target.size()) new_word += alpha[target[j]];
        mp[new_word]=target;
    }

    for(auto [v,vv]:mp) cout<<vv<<endl;

    return 0;
}