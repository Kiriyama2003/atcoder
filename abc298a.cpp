#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;  string s;   cin>>n>>s;
    bool check=0;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            cout<<"No"<<endl;
            return 0;
        }else if(s[i]=='o'){
            check=1;
        }
    }

    if(check==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}