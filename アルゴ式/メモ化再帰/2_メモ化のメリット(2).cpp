#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

//a.cppをメモ化し, 計算量が超減少
vector<int> a(10);
map<int,int> mp;
int rec(int num){
    a[num-1]++;
    if(mp.count(num)){}
    else if(num==1 || num==2){
        mp[num]=1;
    }else {
        mp[num]=rec(num-2)+rec(num-1);
    }

    return mp[num];
}
int main() {
    int result=rec(100);
    for(auto v:a) cout<<v<<endl;
    
    return 0;
}
