#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<int> a;
vector<vector<int>> memo;

//Aの前からi番目の中からいくつか選んで, jを作ることができるか
bool func(int i,int j){
    //過去に計算済みなら
    if(memo[i][j]!=-1) return memo[i][j];

    //i=0のとき, j==0ならtrue
    if(i==0) return memo[i][j]= j==0;

    int flag=0;
    memo[i][j]=0;

    //前からj-1個を使って, j-A[i-1]を作ることができる
    if(j >= a[i-1] && func(i-1,j-a[i-1])==1) flag=1;
    
    //前からi-1個を使って, jを作ることができる
    if(func(i-1,j)) flag=1;


    return flag;
}
int main() {
    int n,x; cin>>n>>x;
    a.resize(n);
    rep(i,n) cin>>a[i];

    memo.resize(n+1,vector<int>(x+1,-1));

    cout<<(func(n,x)?"Yes":"No")<<endl;
    
    return 0;
}