#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //1円玉と5円玉で, n円を支払う
    //最低何枚の硬貨が必要？



    int n,ans=0;  cin>>n;


    ans += n/5;
    
    n-= (n/5)*5;

    ans += n;


    cout<<ans<<endl;

    //cout<< (n/5) + (n%5) <<endl;
    return 0;
}