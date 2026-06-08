#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main() {
    string s;   cin>>s;
    for(int i=0;i<6;i++){
        if(i < s.size()) cout<<s[i];
        else cout<<s[i%s.size()];
    }
    return 0;
}
