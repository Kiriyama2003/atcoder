#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,x;    cin>>n>>x;
    string s;   cin>>s;
    queue<int> t;
    t.push(x-1);
    s[x-1]='@';
    while(t.empty()!=1){
        int num=t.front();
        t.pop();
        if(s[num-1]=='.'){
            s[num-1]='@';
            t.push(num-1);
        }if(s[num+1]=='.'){
            s[num+1]='@';
            t.push(num+1);
        } 
    }
    cout<<s<<endl;
    return 0;
}