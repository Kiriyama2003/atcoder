#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,c,d;    cin>>a>>b>>c>>d;
    if(a<c) cout<<"Takahashi"<<endl;
    else if(a>c) cout<<"Aoki"<<endl;
    else if(b<d) cout<<"Takahashi"<<endl;
    else if(b>d) cout<<"Aoki"<<endl;
    else cout<<"Takahashi"<<endl;
    return 0;
}
