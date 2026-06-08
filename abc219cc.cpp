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
    vector<int> pos(26); //pod[i]：i文字目の位置(0~25)
    rep(i,26) pos[X[i]-'a']=i;

    int N;  cin>>N;
    vector<vector<int>> S(N);

    for (vector<int>& v : S) {
        string s;   cin>>s;
        for(const char c : s) v.push_back(pos[c-'a']);
    }
    sort(all(S));

    for(const vector<int>& s : S) {
        for(const int x : s) cout<<X[x]; //逆に戻す
        cout<<endl;
    }
    return 0;
}