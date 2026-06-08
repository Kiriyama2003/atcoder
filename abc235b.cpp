#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<ll> h(n);
    rep(i,n) cin>>h[i];

    int pos=0;
    //while(pos+1<n && h[pos]<h[pos+1]) pos++;
    //cout<<h[pos]<<endl;

    for(int i=0;i<n-1;i++){
    if(h[i] < h[i+1]){
        if(i==n-2){cout<<h[n-1]<<endl; return 0;}
        continue;
    }else{ cout<<h[i]<<endl; return 0;}
    }



    return 0;
}