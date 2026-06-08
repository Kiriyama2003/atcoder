#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
   string s,t;  cin>>s>>t;
   int now=0;   //探す文字の場所
   for(int i=0;i<t.size();i++){
        if(t[i]==s[now]){
            cout<<i+1<<" ";
            now++;
        }
   }
   cout<<endl;
    return 0;
}