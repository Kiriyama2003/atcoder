#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<set<int>> st(n+1);
    
    rep(i,n-1){
        int a,b;    cin>>a>>b;
        st[a].insert(b);    st[b].insert(a);
    }

    for(int i=1;i<=n;i++){
        if(st[i].size()==n-1){ cout<<"Yes"<<endl; return 0;}
    }
    cout<<"No"<<endl;

    return 0;
}