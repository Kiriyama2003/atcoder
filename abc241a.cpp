#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    vector<int> a(10);
    rep(i,10) cin>>a[i];

    int a1=a[0];
    int a2=a[a1];
    int a3=a[a2];
    cout<<a3<<endl;

    return 0;
}
