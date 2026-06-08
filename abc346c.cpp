#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    ll n,k; cin>>n>>k;
    vector<bool> A(2000000001,false);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        A[a]=1;
    }
    ll sum=0;
    for(int i=1;i<k+1;i++){
        if(A[i]!=1){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}