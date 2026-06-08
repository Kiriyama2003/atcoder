#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    ll k;   cin>>k;
    string res;
    while(k>0){
        res.push_back('0'+(k%2));
        k/=2;
    }
    reverse(all(res));
    rep(i,res.size()){
        if(res[i]=='1') cout<<'2';
        else cout<<'0';
    }
    cout<<endl;

    return 0;
}