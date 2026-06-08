#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    int count=0;

    string ans="";
    for(int i=0;i<n;i++){
        if(count==k) break;
        if(s[i]=='o') {
            count++;
            ans+='o';
        }else ans+='x';
    }
    
    string str(n-ans.size(),'x');
    ans+= str;
    cout<<ans<<endl;
    return 0;
}