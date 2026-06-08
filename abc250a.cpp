#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int h,w,r,c;    cin>>h>>w>>r>>c;
    int res=0;
    if(c!=1) res++;
    if(c!=w) res++;
    if(r!=1) res++;
    if(r!=h) res++;
    cout<<res<<endl;

    return 0;
}