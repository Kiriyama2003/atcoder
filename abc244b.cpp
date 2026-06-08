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
    
    int n;      cin>>n;
    string s;   cin>>s;
    //S：向いてる方に+1  R：右に90度回転
    
    int dir=0,x=0,y=0;
    rep(i,n){
        if(s[i]=='S'){
            if(dir==0) x++;
            else if(dir==1) y--;
            else if(dir==2) x--;
            else if(dir==3) y++;
        }else if(s[i]=='R'){
            dir=(++dir)%4;
        }
    }
    cout<<x<<" "<<y<<endl;


    return 0;
}
