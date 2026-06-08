#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;      cin>>n;
    vector<bool> call(n,false);

    for(int i=0;i<n;i++){
        int a;      cin>>a;
        if(call[i]==0)  call[a-1]=true;
    }

    vector<int>ans;
    for(int i=0;i<n;i++){
        if(call[i]==0)  ans.push_back(i+1);
    }

    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}