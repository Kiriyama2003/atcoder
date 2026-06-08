#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<vector<int>> A(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           int a;   cin>>a;
           if(a==1) A[i].push_back(j+1);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<A[i].size();j++){
            if(j==A[i].size()-1){
                cout<<A[i][j];
            }else cout<<A[i][j]<<" ";
        }
        if(i!=n-1)cout<<endl;
    }

    return 0;
}