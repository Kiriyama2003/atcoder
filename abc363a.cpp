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
    
    int r;cin>>r;
    if(r<100) cout<<100-r<<endl;
    else if(r<200) cout<<200-r<<endl;
    else cout<<300-r<<endl;

    return 0;
}