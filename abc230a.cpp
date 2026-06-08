#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    if(1<=n && n<=9) cout<<"AGC00"<<n<<endl;
    else if(n<=41) cout<<"AGC0"<<n<<endl;
    else cout<<"AGC0"<<n+1<<endl;
    return 0;

}