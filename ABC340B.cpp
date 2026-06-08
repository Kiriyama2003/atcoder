#include<bits/stdc++.h>
using namespace std;
int main() {
    int Q;  cin>>Q;
    vector<long long> A;
    vector<long long> C;

    for(int i=0;i<Q;i++){
        int j;  long long num;
        cin>>j>>num;
        if(j==1){
            A.push_back(num);
        }else{
            //vector<long long> reversed(A.rbegin(),A.end());
            C.push_back(A[A.size()-num]);
        }
    }
    for(int i=0;i<C.size();i++) cout<<C[i]<<endl;
    return 0;
}