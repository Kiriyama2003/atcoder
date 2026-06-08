#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;   cin>>s;
    int r,m;
    rep(i,s.size()){
        if(s[i]=='R') r=i; 
        else if(s[i]=='M') m=i;
    }
    cout<<(r<m?"Yes":"No")<<endl;
    return 0;
}