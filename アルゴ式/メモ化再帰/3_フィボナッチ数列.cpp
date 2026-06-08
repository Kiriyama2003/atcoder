#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int func(int num){
    if(num==0) return 0;
    else if(num==1) return 1;
    else{
        return func(num-1)+func(num-2);
    }    
}
int main() {
    int n;  cin>>n;
    cout<<func(n)<<endl;
    
    return 0;
}
