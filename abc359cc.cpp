#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    ll x1,x2,y1,y2; cin>>x1>>y1>>x2>>y2;
    
    //左に寄せる
    if((x1+y1)%2 ==1) x1--; //奇数なら
    if((x2+y2)%2 ==1) x2--; //奇数なら
    
    ll x=abs(x1-x2),y=abs(y1-y2);
    //(x1,y1)を(0,0)にしたときの, (x2,y2)は(x,y)となる
    

    if(x<=y) cout<<y; //斜め線の上にある　x<yでもいい
    else cout<<(x+y)/2;   //斜め線の下にある

    return 0;
}
