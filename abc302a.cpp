#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll a,b; cin>>a>>b;
    
    cout<< (a%b==0 ? a/b : (a/b)+1);
    return 0;
}