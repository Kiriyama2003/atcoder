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
    int m;  cin>>m;
    vector<int> ans;
    for(int i=10;i>=0;i--){
        while(m >= pow(3,i)){
            ans.push_back(i);
            m -= pow(3,i);
        }
    }
    cout<<ans.size()<<endl;
    for(int v:ans) cout<<v<<" ";
    cout<<endl;

    return 0;
}