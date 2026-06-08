#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a,b,c;    cin>>a>>b>>c;
    


    while(b!=c){
        b++;
        if(b==24) b=0;
        if(b==a){cout<<"No"<<endl; return 0;}
    }

    /*解法2 
    while(b!=c){
        c--;
        if(c==-1) c=23;
        if(c==a){cout<<"No"<<endl; return 0;}
    }
   */
    cout<<"Yes"<<endl;

    
  
    return 0;
}