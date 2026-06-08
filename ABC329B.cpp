#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());

    /*for(int i=n-2;i>=0;i--){
        if(a[i]!=a[n-1]){
            cout<<a[i];
            return 0;
        }
    }*/
    return 0;
}