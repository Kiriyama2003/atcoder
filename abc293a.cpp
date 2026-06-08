#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;       cin>>s;
    for(int i=0;i<(s.size()/2);i++){
        swap(s[2*i],s[2*i+1]);
        
    }
    cout<<s<<endl;
    return 0;
}