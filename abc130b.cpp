#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //n個の重り
    int n,x;  cin>>n>>x;
    vector<int> L(n);
    rep(i,n) cin>>L[i];

    vector<int> b(n+1);
    b[0]=0;
    for(int i=1;i<=n;i++) b[i]=b[i-1]+L[i-1];

    for(int i=0;i<=n;i++) {
        if(b[i]>x){
            cout<<i<<endl;
            return 0;
        } 
    }
    cout<<n+1<<endl; //必要
    return 0;

    
}
