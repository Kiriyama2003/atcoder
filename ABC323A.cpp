#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;   cin>>s;
    int i=1;
    while(i<16){
        if(s[i]=='1'){
            cout<<"No"<<endl;
            return 0;
        }
        i+=2;
    }
    cout<<"Yes"<<endl;
    return 0;
}
