#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //n個の菓子
    //プラン1 お菓子を1個食べる
    //プラン2 半分の個数をお菓子を食べる　お菓子の個数が偶数の場合のみできる
    //最短何日で全てのお菓子を食べきるか　

    int n,cnt=0;  cin>>n;

    while(n>0){
        if(n%2==0) n/=2;
        else n--;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}