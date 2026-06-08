#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    int x; cin>>x;
    string s={"L"};
    for(int i=0;i<x;i++){
        s.push_back('o');
    }
    s.push_back('n');
    s.push_back('g');
    cout<<s;
    return 0;
}