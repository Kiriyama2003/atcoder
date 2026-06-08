#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(void){
    int n,s;  cin>>n>>s;
    vector<vector<int>> a(n+1);
    REP(i,n){
        int cnt;    cin>>cnt;
        
        rep(j,cnt) {int num;cin>>num; a[i].push_back(num);}
    }
    cout<<a[s].back();

    return 0;
}