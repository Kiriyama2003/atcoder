#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    string s;   cin>>s;
    
    int bcnt=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='a') bcnt++;
        else break;
    }

    int fcnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a') fcnt++;
        else break;
    }
    //std::cout<<fcnt<<" "<<bcnt<<endl;

    bool check=true;
    if(fcnt==bcnt) {
        for(int i=0;i<s.size()/2;i++){
            if(s[i] != s[s.size()-1-i]){check=false; break;}
        }
    }else if(fcnt < bcnt){
        string ss(bcnt-fcnt,'a');   string sss; sss=ss+s;

        for(int i=0;i<(sss.size()+1)/2;i++){
            if(sss[i] != sss[sss.size()-1-i]){check=false; break;}

        }
    }else check=false;


    cout<<(check?"Yes":"No")<<endl; 
    return 0;
}