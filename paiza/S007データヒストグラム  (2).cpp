#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
//S007:データヒストグラム
//https://paiza.jp/works/challenges/43/page/result

string s;
int pos = 0;

//再帰関数 f：括弧で囲まれた部分を解凍して文字数をカウント
vector<ll> f() {
    vector<ll> t(26, 0);
    while(pos < s.size()) {
        if(s[pos] == ')'){
            pos++;
            return t;
        }
        else if('a' <= s[pos] && s[pos] <= 'z'){
            t[s[pos]-'a']++;
            pos++;
        }
        else if('0' <= s[pos] && s[pos] <= '9'){
            int tmp = pos;
            while ('0' <= s[pos] && s[pos] <= '9') pos++;
            ll num = stoll(s.substr(tmp, pos - tmp));
            if(s[pos] == '(') {
                pos++;
                vector<ll> tt = f();
                rep(i, 26) t[i] += tt[i] * num;
            }else {
                t[s[pos] - 'a'] += num;
                pos++;
            }
        }
        else if(s[pos] == '(') {
            pos++;
            vector<ll> ttt = f();
            rep(i, 26) t[i] += ttt[i];
        }
    }
    return t;
}

int main() {
    cin>>s;
    vector<ll> ans = f();
    rep(i, 26) {
        cout<<(char)('a'+i)<<" "<<ans[i];
        if(i!=25) cout<<endl;
    }
    return 0;
}
