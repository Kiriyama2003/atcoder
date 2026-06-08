#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool match_or_not(char a,char b){return a=='?' || b=='?' || a==b;}
int main() {
    int x;  cin>>x;
    if(x >= 90) cout<<"expert"<<endl;
    else{
        if(x <40) cout<<40-x<<endl;
        else if(x<70) cout<<70-x<<endl;
        else cout<<90-x<<endl;
    }
    return 0;
}