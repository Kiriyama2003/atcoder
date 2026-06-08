#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,k;    cin>>n>>k;

    vector<int> p(n);
    rep(i,n) cin>>p[i];


    priority_queue<int,vector<int>,greater<int>> que;
    rep(i,k) que.push(p[i]);
    cout<<que.top()<<endl;

    for(int i=k;i<n;i++){
        
        if(que.top() < p[i]){
            que.pop(); que.push(p[i]);
        }

        //出力はここだけ
        cout<<que.top()<<endl;
    }

    return 0;
}