#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  string s;   cin>>n>>s;

    /*
    string ans;         bool check=0;
    rep(i,n){
        if(check==1){
            if(s[i]=='a'){
                ans+="nya";
                check=0;
            }else if(s[i]=='n') ans+='n';
            else {
                ans+='n';
                ans+=s[i];
                check=0;
            }
        }else if(check==0){
            if(s[i]=='n')   check=1;
            else    ans+=s[i];  
        }
    }
    if(check==1) ans+='n';
    
    std::cout<<ans<<endl;*/

    

    while(true) {
    bool fin = 1;
    for(int i = 0; i < (int)s.size() - 1; i++) {
        if(s.substr(i, 2) == "na") {
            s.insert(s.begin() + i + 1, 'y');
            fin = 0;
            break;
        }
    }
    if(fin) break;
    }


    
    std::cout<<s<<endl;
    return 0;
}