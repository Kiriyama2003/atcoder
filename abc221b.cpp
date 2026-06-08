#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    string s,t; cin>>s>>t;
    if(s==t){cout<<"Yes"<<endl; return 0;}
    else{
        for(int i=0;i<=s.size()-2;i++){
            string ss=s;
            swap(ss[i],ss[i+1]);
            if(ss==t){ cout<<"Yes"<<endl; return 0;}
        }
    }
    cout<<"No"<<endl;

    return 0;
}