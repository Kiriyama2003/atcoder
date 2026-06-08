#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int k;  cin>>k;


    if(k<60){
        string s=to_string(k);
        if(s.size()==1) cout<<21<<':'<<0<<s<<endl;
        else cout<<21<<':'<<s<<endl;
    }else{
        string s=to_string(k-60);
        if(s.size()==1) cout<<22<<':'<<0<<s<<endl;
        else cout<<22<<':'<<s<<endl;
    }

    return 0;
}