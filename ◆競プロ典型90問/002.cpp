#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

bool isvalid(string s){
    int score = 0;
    for(char c:s){
        if(c=='(') ++score;
        else if(c==')') --score;

        //1回でも負になったら
        if(score<0) return false;
    }
    // true/falseを出力
    return (score==0);
}


int main(){
    int n;  cin>>n;
    if((n%2)==1) return 0;
    
    for(int bit=0;bit<(1<<n);++bit){
        string s="";

        for(int i=n-1;i>=0;i--){
            //i=0 (1<<0)　一番下の桁
            //i=1 (1<<1)  下から2番目
            //i=2 (i<<2) = 11
            if( bit & (1<<i) ) s+=')';
            else s+= '(';
        }

        if(isvalid(s)) cout<<s<<endl;
    }
    
    return 0;  
}