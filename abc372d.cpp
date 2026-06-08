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
    int n;  cin>>n;
    vector<int> h(n);
    rep(i,n) cin>>h[i];

    vector<int> s,ans;
    for(int i=n-1;i>=0;i--){
        int nowh=h[i];

        ans.push_back(s.size()); //

        while(!s.empty() && s.back()<nowh) s.pop_back();
        
        s.push_back(nowh);
    }

    for(int i= ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
    cout<<endl;



    return 0;
}