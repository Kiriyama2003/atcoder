#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;    cin>>n>>q;
    vector<char>s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    vector<bool>a(n-1,false);
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) a[i]=1;
    }

    vector<ll>all(n);
    all[0]=0;
    for(int i=1;i<n;i++){
        all[i]=all[i-1]+a[i-1];
    }

    //for(auto aa:a) cout<<aa<<" ";
    //cout<<endl;
    //for(auto aa:all) cout<<aa<<" ";
    vector<int>ans(q);
    for(int i=0;i<q;i++){
        int l,r;    cin>>l>>r;
        ans[i]=all[r-1]-all[l-1];
    }
    for(auto a:ans) cout<<a<<endl;
    return 0;
}