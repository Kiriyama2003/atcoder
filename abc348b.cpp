#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<pair<int,int>>x(n);
    for(int i=0;i<n;i++){
        int a,b;    cin>>a>>b;
        x[i].first=a;   x[i].second=b;
    }
    //for(auto d:x)   cout<<d.first<<" "<<d.second<<endl;
    for(int i=0;i<n;i++){
        pair<int,ll>ans=make_pair(101,0);
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if((x[i].first-x[j].first)*(x[i].first-x[j].first)+(x[i].second-x[j].second)*(x[i].second-x[j].second) >ans.second) {
                ans.first=j;
                ans.second=(x[i].first-x[j].first)*(x[i].first-x[j].first)+(x[i].second-x[j].second)*(x[i].second-x[j].second);
            }
        }
        cout<<ans.first+1<<endl;
    }

    
    return 0;
}