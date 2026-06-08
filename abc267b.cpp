#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
const int mod=998244353;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    vector<bool>retu(8,true);
    string S;   cin>>S;
    if(S[6]=='0')               retu[1]=false;
    if(S[3]=='0')           retu[2]=false;
    if(S[1]=='0'&&S[7]=='0')    retu[3]=false;
    if(S[0]=='0'&&S[4]=='0')    retu[4]=false;
    if(S[2]=='0'&&S[8]=='0')    retu[5]=false;
    if(S[5]=='0')               retu[6]=false;
    if(S[9]=='0')               retu[7]=false;

    int a=8,b=0;
    if(S[0]=='1'){cout<<"No"<<endl; return 0;}
    for(int i=1;i<=7;i++){
        if(retu[i]){
            a=min(a,i);
            b=max(b,i);
        }
    }
    if(b-a <=1){cout<<"No"<<endl; return 0;}
    for(int i=a+1;i<b;i++){
        if(retu[i]==false){cout<<"Yes"<<endl; return 0;}
    }

    cout<<"No"<<endl;
    return 0;
}