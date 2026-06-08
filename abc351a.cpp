#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int a=0,b=0;
    for(int i=0;i<9;i++)  {
        int tmm;cin>>tmm;a+=tmm;
    }
    for(int i=0;i<8;i++) { int tm;cin>>tm;b+=tm;}
    cout<<a-b+1<<endl;    
    return 0;
}