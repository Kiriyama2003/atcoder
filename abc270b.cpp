#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int x,y,z;  cin>>x>>y>>z;
    if(y<0){
        x=-x;y=-y;z=-z;
    }
    if(x<y) cout<<abs(x)<<endl;
    else{
        if(z>y) cout<<-1<<endl;
        else {
            cout<<abs(z)+abs(x-z)<<endl;
        }
    }
    return 0;
}