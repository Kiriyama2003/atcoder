#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        int a1,a2,a3,a4,a5,a6,a7;
        cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7;
        A[i]=a1+a2+a3+a4+a5+a6+a7;
    }
    cout<<A[0];
    for(int i=1;i<n;i++)    cout<<" "<<A[i];
    cout<<endl;
    return 0;
}