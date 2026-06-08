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
    int q;  cin>>q;
    vector<int> type(q,0),x(q,0);
    rep(i,q){
        cin>>type[i];
        if(type[i]==1) cin>>x[i];
    }

    priority_queue<int,vector<int>,greater<int>> t;
    rep(i,q){
        if(type[i]==1) t.push(x[i]);
        else if(type[i]==2) cout<<t.top()<<endl;
        else t.pop();
    }
    return 0;
}