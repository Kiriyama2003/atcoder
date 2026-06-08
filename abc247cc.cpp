#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int nn;  cin>>nn;

    auto func = [&](int n, auto& func_ref) -> void {
        if(n == 1) cout<<1;
        else {
            func_ref(n-1, func_ref);
            cout<<" "<<n<<" ";
            func_ref(n-1, func_ref);
        }
    };
    func(nn,func);
    return 0;
}