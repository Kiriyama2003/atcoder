#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,k;  cin>>n>>k;
    priority_queue<int> que;
    rep(i,n){
        int num;cin>>num;
        que.push(num);
    }

    rep(i,k){
        int num=que.top();
        que.pop();
        que.push(num/2);
    }
    ll ans=0;
    rep(i,n){
        ans+= que.top();
        que.pop();
    }
    cout<<ans<<endl;
    
    



    return 0;
}