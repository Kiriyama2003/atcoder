#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;  cin>>n;
    map<int,int> mp;
    mp[1]=0;
    //keyは値, valueは世代
    int max_no=1;
    rep(i,n){
        int t;  cin>>t;
        mp[max_no+1]=mp[t]+1;
        mp[max_no+2]=mp[t]+1;
        max_no+=2;
    }
    for(int i=1;i<=n*2+1;i++){
        cout<<mp[i]<<endl;
    }
    return 0;
}