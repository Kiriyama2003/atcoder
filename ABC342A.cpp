
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;   cin>>s;
    for(int i=1;i<s.size()-1;i++){
        if(s[i-1]!=s[i] && s[i]!=s[i+1]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    if(s[0]!=s[1] && s[0]!=s[2]) {
        cout<<1<<endl;
        return 0;
    }
    int crt=s.size();
    if(s[crt]!=s[crt-1] && s[crt]!=s[crt-2]) cout<<crt<<endl;
    return 0;
}