#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    int tmp;
    cin>>tmp;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        cout<<a*tmp<< (i != n-1 ? ' ' : '\n');
        tmp=a;
    }
    
    return 0;
}