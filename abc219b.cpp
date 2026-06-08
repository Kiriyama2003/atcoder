#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    vector<string> s(3);
    string t;    cin>>s[0]>>s[1]>>s[2]>>t;
    rep(i,t.size()){
        if(t[i]=='1') cout<<s[0];
        else if(t[i]=='2') cout<<s[1];
        else cout<<s[2];
    }
    cout<<endl;

    return 0;
}