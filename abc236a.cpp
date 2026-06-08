#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   int a,b;   cin>>s>>a>>b;
    for(int i=0;i<(int)s.size();i++){
        if(i==(a-1)) cout<<s[b-1];
        else if(i==(b-1)) cout<<s[a-1];
        else cout<<s[i];
    }

    return 0;
}