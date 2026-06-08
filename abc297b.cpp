#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;cin>>s;
    if((s.find('B')%2) != (s.rfind('B')%2)){
        if(s.find('R') <s.find('K') && s.find('K') <s.rfind('R')){

            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }else cout<<"No"<<endl;
    return 0;
}