#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    string s;
    cin>>s;
    
    if(isupper(s[0])) {
        if(s.length()==1) {
            cout<<"Yes";
            exit(0);
        }
        for(int i=1;i<s.length();i++){
            if(isupper(s[i])) break;
            if(i+1 == s.length()){
                cout<<"Yes";
                exit(0);
            }
        }
    }
    cout<<"No";
    return 0;
}