#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int H,W;    cin>>H>>W;

    if(H==1 or W==1) cout<<H*W<<"\n";
    else cout<<((H+1)/2)*((W+1)/2)<<"\n";
    
    return 0;  
}