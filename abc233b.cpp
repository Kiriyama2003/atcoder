#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int l,r; cin>>l>>r;   string s;   cin>>s;
    l--; r--;
    for(int i=0;i<l;i++) cout<<s[i];

    for(int i=r;i>=l;i--) cout<<s[i];

    for(int i=r+1;i<s.size();i++) cout<<s[i];
    cout<<endl;
    return 0;
}