#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
int main() {
    string s,t;   cin>>s>>t;
    if(s==t) cout<<"0"<<endl;
    else{
        string str(101,'0');
        s+= str;    t+=str;
        rep(i,100){
            if(s[i]!=t[i]){cout<<i+1<<endl; return 0;}
        }
    }
    return 0;
}