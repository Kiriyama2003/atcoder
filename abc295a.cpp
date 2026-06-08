#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;cin>>n;
    bool check=0;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(s=="and" || s=="not" || s=="that" || s=="the" || s=="you"){
            check=1;
        }
    }
    cout<<(check?"Yes":"No")<<endl;
    return 0;
}