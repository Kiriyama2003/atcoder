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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n,q,type,x;    cin>>n>>q;
    string s;   cin>>s;

    /*TLE
    rep(i,q){
        cin>>type;
        if(type==1){
            cin>>x;
            string str=s.substr(n-x,x);
            s.erase(n-x,x);
            string ans=str+s;
            s=ans;
        }else if(type==2){
            cin>>x;
            cout<<s[x-1]<<endl;
        }
    }*/
    int p=0;
    rep(i,q){
        cin>>type>>x;
        if(type==1) p=(p + (n-x) ) %n;
        else cout<<s[((p+x)-1)%n]<<endl;
    }
    return 0;
}