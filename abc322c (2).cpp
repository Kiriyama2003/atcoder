#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //std::ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,m;    cin>>n>>m;
    vector<int>vec(m);
    rep(i,m) {
        cin>>vec[i];
        vec[i]--;
    }
    //vec={2,3}=>{1,2}
    for(int i=0;i<n;i++){//0~2
        int num = *lower_bound(vec.begin(),vec.end(),i);
        cout<<num-i<<endl;
    }


    return 0;
}