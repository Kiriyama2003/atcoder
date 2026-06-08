#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;   cin>>s;
    int check=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|') {
            check++;
            continue;
        }
        if(check!=1 )cout<<s[i];
    }
    return 0;
}