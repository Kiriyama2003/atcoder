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
    
    //荷物の数n
    int n;  cin>>n;
    
    vector<int> A(n);   rep(i,n) cin>>A[i];
    vector<int> W(n);   rep(i,n) cin>>W[i];
    vector<int> max_weight(n,0);

    for(int i=0;i<n;i++){
        A[i]--;
        max_weight[A[i]]=max(max_weight[A[i]], W[i]);
    }
    const int sum_w=accumulate(W.begin(),W.end(),0LL);
    const int sum_max=accumulate(max_weight.begin(),max_weight.end(),0LL);
    cout<<sum_w-sum_max<<endl;
    return 0;
}