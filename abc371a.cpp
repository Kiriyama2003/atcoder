#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    char a,b,c;  cin>>a>>b>>c;
    /*vector<char> r(6);
    if(a == '>' and b == '>' and c == '>') cout<<"B"<<endl;
    else if(a == '>' and b == '>' and c == '<') cout<<"C"<<endl;
    //else if(a == '>' and b == '<' and c == '>') cout<<"a"<<endl;
    else if(a == '>' and b == '<' and c == '<') cout<<"A"<<endl;

    else if(a == '<' and b == '>' and c == '>') cout<<"A"<<endl;
    //else if(a == '<' and b == '>' and c == '<') cout<<"A"<<endl;
    else if(a == '<' and b == '<' and c == '>') cout<<"C"<<endl;
    else if(a == '<' and b == '<' and c == '<') cout<<"B"<<endl;*/

    //解法2
    if(a!=b) cout<<"A"<<endl;
    if(a==c) cout<<"B"<<endl;
    if(b!=c) cout<<"C"<<endl;

    return 0;
}