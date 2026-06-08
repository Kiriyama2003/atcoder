#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s,t;    cin>>s>>t;
   
    
    int p=0;
    for(char c:s){
        if(p==3) break;
        if(c-'a'==t[p]-'A') p++;
    }
    
    cout<<(((p==3) || (p==2 && t[2]=='X')) ? "Yes":"No")<<endl;
    

    return 0;
}