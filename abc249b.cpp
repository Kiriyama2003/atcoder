#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   cin>>s;
    bool komoji=0,omoji=0,moji=1;
    set<char> st;

    for(int i=0;i<(int)s.size();i++){
        if('a'<=s[i] && s[i]<='z') komoji=1;
        if('A'<=s[i] && s[i]<='Z') omoji=1;
        if(st.count(s[i])) moji=0;
        st.insert(s[i]);
    }

    //全部1なら
    if(komoji && omoji && moji) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    

    return 0;
}