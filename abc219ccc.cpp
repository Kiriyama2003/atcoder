#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    string X;   cin>>X;
    vector<int> pos(26);
    rep(i,26) pos[X[i] - 'a'] = i;

    int N;  cin>>N;
    vector<string> S(N);
    for(string& s : S) cin>>s;

    sort(begin(S), end(S), [&](const string& s, const string& t) {
        // 文字列の比較
        int len = min(size(s), size(t));
        for (int i = 0; i < len; ++i) {
            if (s[i] != t[i]) {
                return pos[s[i] - 'a'] < pos[t[i] - 'a'];  
                //右の方が大きかったら, そのままでいい
                //左の方が大きいなら, 交換する
            }
        }
        return size(s) < size(t);
        //右の方が文字数が多い状態なら, そのまま
        //左の方が, 文字数が多い状態なら, 交換する
    });

    for(string s : S) cout<<s<<endl;
}
