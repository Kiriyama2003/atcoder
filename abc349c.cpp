#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s,t;    cin>>s>>t;   s+='x';
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                //cout<<s[i]<<s[j]<<s[k]<<endl;
                //cout<<tolower(t[0])<<tolower(t[1])<<tolower(t[2])<<endl<<endl;
                if(tolower(t[0]) ==s[i] && tolower(t[1])==s[j] && (tolower(t[2])==s[k])){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
            
        }
    }
    cout<<"No"<<endl;

    return 0;
}