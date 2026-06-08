#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        p[i]=x;
    }

    int q;  cin>>q;
    vector<pair<int,int>> A(q);
    for(int i=0;i<q;i++){
        int a,b;    cin>>a>>b;
        A[i].first=a;   A[i].second=b;
    }

    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(A[i].first==p[j]) {
                cout<<A[i].first<<endl;
                break;
            }else if(A[i].second==p[j]){
                cout<<A[i].second<<endl;
                break;
            }
        } 
    }
    return 0;
}