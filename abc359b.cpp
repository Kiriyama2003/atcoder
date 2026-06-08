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
    
    int n,ans=0;  cin>>n;
    vector<int> A(2*n);
    rep(i,2*n) cin>>A[i];

    for(int i=0;i<(2*n-2);i++){
        if(A[i]==A[i+2]&&A[i]!=A[i+1]) ans++;
    }
    cout<<ans<<endl;

    return 0;
}