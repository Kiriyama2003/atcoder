/*#include<bits/stdc++.h>
using namespace std;
    long long f(long long N){
        return N==1 ? 0 : f(N/2)+ f((N+1)/2) + N;
    }
int main(void){
    long long N;
    cin>>N;
    cout<<f(N)<<endl;
    
    return 0;
}*/

#include<bits/stdc++.h>
using ll =long long;
using namespace std;

unordered_map<ll,ll> memo;

ll f(ll x){
    if(x==1)return 0;
    if(memo.count(x)) return memo[x];
    ll res=f(x/2)+f((x+1)/2) + x;
    return memo[x]=res;
}
int main(void){
    ll N; cin>>N;

    
    return 0;
}