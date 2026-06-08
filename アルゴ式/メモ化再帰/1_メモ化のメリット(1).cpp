#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
vector<int> a(10);
void rec(int num){
    a[num-1]++;
    if(num==1 || num==2) return;
    else return rec(num-2),rec(num-1);
}
int main() {
    rec(100);
    for(auto v:a) cout<<v<<endl;
    
    return 0;
}
