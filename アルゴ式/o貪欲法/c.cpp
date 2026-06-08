#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    //50円玉a枚　10円玉b枚 5円玉c枚　1円玉d枚
    //x円を払う　最短で何枚の硬貨が必要
    int x;  cin>>x;
    vector<int> a(4),b={50,10,5,1};
    cin>>a[0]>>a[1]>>a[2]>>a[3];

    int cnt=0;
    rep(i,4){
        if(x<=0) continue;
        cnt += min(x/b[i],a[i]);
        x-= min(x/b[i],a[i]) * b[i];
    }
    cout<<cnt<<endl;

    return 0;
}