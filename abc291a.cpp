#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;       cin>>s;
    for(int i=0;i<s.size();i++){
        int num=s[i];
        if(num<=96) {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}