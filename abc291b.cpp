#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;      cin>>n;
    vector<int>score(5*n);
    rep(i,5*n) cin>>score[i];
    sort(score.begin(), score.end());
    for(int i=0;i<n;i++){
        score.pop_back();
        score.erase(score.begin());
    }
    double ans= (double)accumulate(score.begin(),score.end(),0) /(double)(3*n);
    cout<<fixed<<setprecision(15)<<ans<<endl;
    return 0;
}