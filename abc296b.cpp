#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    int num;
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        
        for(int j=0;j<8;j++){
            if(s[j]=='*'){
                c='a'+j;
                num=(8-i);
            }
        }
    }
    cout<<c<<num<<endl;
    return 0;
}