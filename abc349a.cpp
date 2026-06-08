#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        int a;cin>>a;
        sum+=a;
    }
    cout<<-sum<<endl;
    return 0;
}