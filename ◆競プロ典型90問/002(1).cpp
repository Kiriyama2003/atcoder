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

    string s = string(n/2, '(' ) + string(n/2, ')' );
    
    sort(all(s));

    do{
        if(isvalid(s)) cout<<s<<endl;
    }while(next_permutation(all(s)));

    
    return 0;  
}