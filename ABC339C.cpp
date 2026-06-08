#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n; cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<long long> r(n);
    r[0]=a[0];
    for(int i=1;i<n;i++){
        r[i]=r[i-1]+a[i];
    }
    //for(int i=0;i<n;i++) cout<<r[i]<<" ";
    sort(r.begin(),r.end());
    long long x=0;
    if(r[0]<0) x= -r[0];

    for(int i=0;i<n;i++){
        x+=a[i];
    }
    cout<<x;
    return 0;
}