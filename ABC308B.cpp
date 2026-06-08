#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;    cin>>n>>m;

    vector<string>c(n);
    for(int i=0;i<n;i++) cin>>c[i];

    vector<pair<string,int>>d(m);
    int P0=0;
    
    for(int i=0;i<m;i++) cin>>d[i].first;
    cin>>P0;
    for(int i=0;i<m;i++) cin>>d[i].second;

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i]==d[j].first){
                sum+=d[j].second;
                break;
            }
            if(j==m-1) sum+=P0;
        }
    }
    cout<<sum<<endl;
    return 0;
}