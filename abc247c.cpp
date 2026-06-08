#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a;  cin>>a;
    
    //解法1
    vector<string> sss(a+1);
    sss[1]='1';
    
    for(int i=2;i<=a;i++){
        sss[i]=sss[i-1]+" "+to_string(i)+" "+sss[i-1];
    }
    
    cout<<sss[a]<<endl;
    

   /*解法2
   if(a==1){cout<<1<<endl; return 0;}
   string w;
   for(int i=1;i<=a;i++){
        string t=to_string(i);
        w=w+" "+t+" "+w;
   }
   cout<<w<<endl;*/

    
    return 0;
}