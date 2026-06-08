#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll n,d;     cin>>n>>d;      vector<ll>t(n);
    for(int i=0;i<n;i++) cin>>t[i];

    for(int i=1;i<n;i++){
        if(t[i] - t[i-1] <=d){
            cout<<t[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}