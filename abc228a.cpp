#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int s,t,x;    cin>>s>>t>>x;
    if(s<t){
        if(s<(x+0.5) && (x+0.5)<t) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }else{
        if(t<(x+0.5) && (x+0.5)<s) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    
    return 0;
}