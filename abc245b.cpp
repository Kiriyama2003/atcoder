#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;    cin>>n;
    set<int> a;
    rep(i,n){
        int num;    cin>>num;
        a.insert(num);
    }
    for(int i=0;i<2010;i++){
        if(!a.count(i)){
            cout<<i<<endl;
            return 0;
        }
    }



    return 0;
}
