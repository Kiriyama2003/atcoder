#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;  cin>>n;
    vector<long long> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n-1;i++){
        long long s,t;cin>>s>>t;
        long long num=A[i]/s;
        A[i+1]+=num*t;
    }
    cout<<A[n-1]<<endl;
    return 0;
}