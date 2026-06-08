#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k,x;  cin>>n>>k>>x;
    rep(i,n){
        int a;  cin>>a;   cout<<a;
        if(i==(k-1)) cout<<" "<<x<<" ";
        else cout<<" ";
    }
    return 0;
}