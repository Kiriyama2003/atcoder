#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int h;  cin>>h;
    int num=0;
    int cnt=-1;
    while(num<=h){
        cnt++;
        num+=pow(2,cnt);

        
    }
    cout<<cnt+1<<endl;

    return 0;
}