#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //n人　髪の長さt以上の人が, p人以上になるのは何日後か
    int n,t,p;  cin>>n>>t>>p;

    //髪の長さ
    vector<int> L(n);
    rep(i,n) cin>>L[i];
    sort(L.rbegin(),L.rend());
    
    cout<<((t-L[p-1])>0?(t-L[p-1]):0)<<endl;

    return 0;
}