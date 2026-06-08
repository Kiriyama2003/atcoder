#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    string s,t; cin>>s>>t;

    /*
    vector<int> a((int)s.size()),b((int)s.size());
    rep(i,s.size())  a[i]=s[i]-'a';
    rep(i,t.size())  b[i]=t[i]-'a';

    rep(i,26){
        rep(i,s.size()) {a[i]++; a[i]%=26;}
        if(a==b) {cout<<"Yes"<<endl; return 0;} 
    }
    cout<<"No"<<endl;*/


    /*解法2 ほぼ同じだが
    for(int k=0;k<=25;k++){
        string s2=s;
        for(int i=0;i<s.size();i++) s2[i]=(s2[i]-'a'+k)%26 + 'a';
        if(s2==t){cout<<"Yes"<<endl; return 0;}
    }
    cout<<"No"<<endl; */


    return 0;
}