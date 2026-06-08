#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,q;    cin>>n>>q;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];
    int top=0;
    while(q--){
        int type,x,y;   cin>>type>>x>>y;
        --x,--y;
        if(type==1){
            swap(A[(top+x)%n],A[(top+y)%n]);
        }else if(type==2){
            --top;
            (top+=n)%=n;
        }else{
            cout<<A[(top+x)%n]<<'\n';
        }

        //rep(i,n) cout<<A[(top+i)%n]<<' ';
        //cout<<'\n';
    }
    
    return 0;  
}