#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;      cin>>n;
    rep(i,n){
        int num;    cin>>num;
        if(num%2==0) cout<<num<<" ";
    }
    return 0;
}