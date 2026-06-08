#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int v;vector<int> a(3);    cin>>v>>a[0]>>a[1]>>a[2];
    
    int now=0;  ll sum=0;
    while(1){
        sum+=a[now];
        if(v<sum) break;
        now++;  now%=3;
    }
    
    if(now==0)      cout<<'F'<<endl;
    else if(now==1) cout<<'M'<<endl;
    else if(now==2) cout<<'T'<<endl;

    return 0;
}