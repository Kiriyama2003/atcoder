#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n; cin>>n;
    vector<string>a(n);
    vector<string>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != b[i][j]){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    return 0;
}