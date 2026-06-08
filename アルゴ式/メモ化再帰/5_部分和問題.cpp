#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<int> a;

//Aの前からi番目の中からいくつか選んで, jを作ることができるか
bool func(int i,int j){

    if(i==0) return j==0;
    bool flag=false;

    if(j >= a[i-1] && func(i-1,j-a[i-1])) flag=true;
    if(func(i-1,j)) flag=true;
    return flag;
}
int main() {
    int n,x; cin>>n>>x;
    a.resize(n);
    rep(i,n) cin>>a[i];

    cout<<(func(n,x)?"Yes":"No")<<endl;
    
    return 0;
}