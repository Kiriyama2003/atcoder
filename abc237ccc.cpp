#include<bits/stdc++.h>
#include <iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   cin>>s;
    int num=s.size();
    
    int bcnt=0;
    for(int i=s.size()-1;i>=0;i--) if(s[i]=='a'){bcnt++;} else break;

    int fcnt=0;
    for(int i=0;i<s.size();i++) if(s[i]=='a'){fcnt++;} else break;
    //cout<<fcnt<<" "<<bcnt<<endl;

    bool check=true;
    if(fcnt<=bcnt) {
        for(int i=fcnt,index=(num-bcnt)-fcnt-1;index>0;index-=2,i++){
            if(s[i]!=s[i+index]) check=false;
            //cout<<i<<" "<<i+index<<endl;
            
        }
        //for(int i=0;i<(num-fcnt-bcnt)/2;i++){
        //    if(s[fcnt+i]!=s[num-bcnt-i]) check=false;
        //}
    }else check=false;


    cout<<(check?"Yes":"No")<<endl; 
    return 0;
}