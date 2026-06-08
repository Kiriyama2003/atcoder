#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    long long n; cin>>n; n--;

    vector<int> a;
    while (n != 0){
        a.push_back(n%5);
        n/=5;
    }
    if(a.empty()==true) a.push_back(0);   //nが0の時,aは空白だから,0を足す

    reverse(begin(a),end(a));       //aを反転

    //1
    for(int i=0;i<a.size();i++) cout<<a[i]*2;
    
    //for(auto& x:a) cout<<x*2;

    return 0;
}