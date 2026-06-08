#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;    cin>>n>>m;
    vector<ll> A(n);    rep(i,n) cin>>A[i];
    vector<ll> B(m);    rep(i,m) cin>>B[i];

    sort(A.begin(),A.end());    sort(B.begin(),B.end());

    bool check=1;   ll sum=0;
    for(int i=0;i<m;i++){
        if(lower_bound(A.begin() , A.end() , B[i])==A.end()){
            check=0;    break;
        }
        sum+=*lower_bound(A.begin() , A.end() , B[i]);
        
        A.erase(lower_bound(A.begin() , A.end() , B[i]));
    }

    cout<<(check?sum:-1)<<endl;



    return 0;
}