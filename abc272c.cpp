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

    int n;  cin>>n;
    vector<ll> A(n);
    rep(i,n) cin>>A[i];

    //要素が2つ　の場合
    if(n==2){
        cout<<(((A[0]+A[1])%2==0)?A[0]+A[1]:-1)<<endl;
        return 0;
    }

    vector<ll> even,odd;

    rep(i,n){
        if(A[i]%2==0)   even.push_back(A[i]);
        else            odd.push_back(A[i]);
    }

    sort(ALL(even));    sort(ALL(odd));
    ll max_even=0,max_odd=0;

    if(even.size()>=2) max_even=(even[(int)even.size()-1]+even[(int)even.size()-2]);
    if(odd.size()>=2) max_odd=(odd[(int)odd.size()-1]+odd[(int)odd.size()-2]);
    cout<<max(max_even,max_odd)<<endl;

    return 0;
}