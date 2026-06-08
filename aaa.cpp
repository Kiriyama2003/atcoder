#include<bits/stdc++.h>

using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;

int main() {
    string s="Pbatengf! gur Nafjre vf GQH_AJFrphevgl";
    rep(i,s.size()){
        if('a' <= s[i] && s[i] <= 'z'){
            s[i] = (s[i] - 'a' + 13) % 26 + 'a'; 
        }else if('A' <= s[i] && s[i] <= 'Z'){
            s[i] = (s[i] - 'A' + 13) % 26 + 'A';
        } 
    }
    cout << s << endl; 
    return 0;
}