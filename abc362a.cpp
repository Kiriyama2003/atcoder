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
    
    int r,g,b;  string s;    cin>>r>>g>>b>>s;

    if(s=="Red") cout<<min(g,b)<<endl;
    else if(s=="Green") cout<<min(r,b)<<endl;
    else cout<<min(r,g)<<endl;

    return 0;
}