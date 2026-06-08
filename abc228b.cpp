#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n,x;  cin>>n>>x;

    vector<int> a(n+1);
    REP(i,n) cin>>a[i];
    vector<bool> b(n+1,true);
    b[x]=false;

    int num=a[x];
    while(b[num]){
        b[num]=false;
        num=a[num];
    }


    int cnt=0;
    REP(i,n) if(!b[i]) cnt++;
    cout<<cnt<<endl;

    return 0;
}