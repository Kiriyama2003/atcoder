#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    char a,b,c; cin>>a>>b>>c;
    string abc=string({a,b,c});
    string bca=string({b,c,a});
    string cab=string({c,a,b});

    int ans=stoi(abc)+stoi(bca)+stoi(cab);
    cout<<ans<<endl;

    //解法2
    string s;   cin>>s;
    string s1=string(1,s[0])+s[1]+s[2];
    string s2=string(1,s[1])+s[2]+s[0];
    string s3=string(1,s[2])+s[0]+s[1];

    cout<<stoi(s1)+stoi(s2)+stoi(s3)<<endl;

    return 0;
}