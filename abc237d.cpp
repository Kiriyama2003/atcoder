#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  string s;   cin>>n>>s;
    
    deque<int> d={n};

    for(int i=n-1;i>=0;i--){
        if(s[i]=='R') d.push_front(i);
        else if(s[i]=='L') d.push_back(i);
    }
    while(!d.empty()){ cout<<d.front()<<" "; d.pop_front();}
    
    cout<<endl;
    return 0;
}