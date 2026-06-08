#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++) cin>>s[i];


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)continue;
            string tmp=s[i]+s[j];
            string tmpp=tmp;
            reverse(tmpp.begin(),tmpp.end());
            if(tmp==tmpp) {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
    }