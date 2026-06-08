#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int y;cin>>y;
    if((y%4)!=0){
        cout<<365<<endl;
    }else if((y%100)!=0){
        cout<<366<<endl;
    }else if((y%400)!=0){
        cout<<365<<endl;
    }else{
        cout<<366<<endl;
    }
   


    return 0;
}