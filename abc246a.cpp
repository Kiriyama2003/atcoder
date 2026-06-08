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
    int x1,y1,x2,y2,x3,y3;  cin>>x1>>y1>>x2>>y2>>x3>>y3;

    if(x1==x2) cout<<x3<<" ";
    else if(x2==x3) cout<<x1<<" ";
    else if(x1==x3) cout<<x2<<" ";

    if(y1==y2) cout<<y3;
    else if(y2==y3) cout<<y1;
    else if(y1==y3) cout<<y2;

    
    return 0;
}
