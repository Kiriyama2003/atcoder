#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;   cin>>s;
    if(s=="Friday") cout<<1<<endl;
    else if(s=="Thursday") cout<<2<<endl;
    else if(s=="Wednesday") cout<<3<<endl;
    else if(s=="Tuesday") cout<<4<<endl;
    else if(s=="Monday") cout<<5<<endl;

    return 0;
}