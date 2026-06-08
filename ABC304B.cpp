#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n;   cin>>n;
    if(n<=999) cout<<n;
    else if(n<=9999)     cout<<n/10      <<"0";
    else if(n<=99999)    cout<<n/100     <<"00";
    else if(n<=999999)   cout<<n/1000    <<"000";
    else if(n<=9999999)  cout<<n/10000   <<"0000";
    else if(n<=99999999) cout<<n/100000  <<"00000";
    else if(n<=999999999)cout<<n/1000000 <<"000000";
    return 0;
}