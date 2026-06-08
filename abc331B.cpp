#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,s,m,l;
    cin>>n>>s>>m>>l;
    vector<int> a;
    //int ans = 100000000;
    //エラー:i<n  i<(n/6)+1  i<=n/6

    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            for(int k=0;k<101;k++){
                if(n<= i*6+j*8+k*12 ){
                    //ans=min(ans,i*s+j*m+k*l);
                    a.push_back(i*s+j*m+k*l);
                }
            }
        }
    }
    sort(a.begin(),a.end());
    cout<<a[0]<<endl;
    //cout<<ans<<endl;
    return 0;
}