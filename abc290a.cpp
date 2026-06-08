#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n,m;     cin>>n>>m;
    vector<int>A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    int sum=0;
    for(int i=0;i<m;i++){
        int a;cin>>a;
        sum+=A[a-1];
    }
    cout<<sum<<endl;
    return 0;
}