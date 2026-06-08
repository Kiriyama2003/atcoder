#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0){
            if(i%3==0) cout<<"Fizz";
            if(i%5==0) cout<<"Buzz";
        }else cout<<i;
        cout<<endl;
    }
    return 0;
}