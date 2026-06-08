#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,d; cin>>a>>b>>d;
    vector<int> A;
    //vector<int> A((b - a) / d + 1);
    A.push_back(a);
    a+=d;
    for(int i=1;a<=b;i++){
        A.push_bacck(a);
        a+=d;
    }
    for(int i=0;i<A.size()-1;i++) cout<<A[i]<<" ";
    cout<<A[A.size()-1]<<endl;
    return 0;
}