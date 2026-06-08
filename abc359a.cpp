#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,sum=0;    cin>>n;
    rep(i,n){
        string s;   cin>>s;
        if(s=="Takahashi") sum++;
    }
    cout<<sum<<endl;
    return 0;
}