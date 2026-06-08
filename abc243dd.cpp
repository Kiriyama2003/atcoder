#include <bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    
    ll n,x;     cin>>n>>x;
    string s;   cin>>s;

    vector<char> T;

    for(char c:s){
        if(c=='U' and !T.empty() and (T.back()=='L' or T.back()=='R')){
            T.pop_back();
        }else{
            T.push_back(c);
        }
    }

    rep(i,T.size()){
        if(T[i]=='U') x = x/2;
        if(T[i]=='R') x = x*2 +1;
        if(T[i]=='L') x = x*2;
    }
    cout<<x<<endl;
    return 0;

}