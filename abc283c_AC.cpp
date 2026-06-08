#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
int main(){
    string s;   cin>>s;     ll ans=0;
    while(!s.empty()){
        char bk=s.back();   s.pop_back();
        if(bk=='0' && s.back()=='0') s.pop_back();
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}