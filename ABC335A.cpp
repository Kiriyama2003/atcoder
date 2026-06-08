#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    string s; cin>>s;
    int x=s.size();
    s[x-1]='4';
    //s.replace(x-1,1,"4");
    //s.pop_back(); s.push_back('4');


    for(int i=0;i<x;i++) cout<<s[i];
    //cout<<s;  これでもいいんだね
    return 0;
}