#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;      cin>>n;
    string s;   cin>>s;


    /*
    if(s.find("ab") != -1) cout<<"Yes"<<endl;
    else if(s.find("ba") !=-1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/

    for(int i=0;i<s.size();i++){
        if(s[i]=='a') {
            if(s[i+1]=='b'){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        else if(s[i]=='b') {
            if(s[i+1]=='a'){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;



    return 0;
}