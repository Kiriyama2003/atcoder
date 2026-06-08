#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n,s,k; cin>>n>>s>>k;

    vector<vector<int>> vv(n,vector<int>(2));
    for(int i=0;i<n;i++) cin>>vv[i][0]>>vv[i][1];

    int sum=0;
    for(int i=0;i<n;i++){
        sum+= vv[i][0]*vv[i][1];
    }
    if(sum < s) sum+=k;
    cout<<sum<<endl;


    return 0;
}