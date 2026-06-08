#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n;cin>>n;
    int sum=0;
    rep(i,n){
        string s;cin>>s;
        if(s=="For") sum++;
    }
    if(sum>n/2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}