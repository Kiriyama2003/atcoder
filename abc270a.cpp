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
    int a,b;    cin>>a>>b;
    vector<bool>num(3,false);
    if(a==1) num[0]=1;
    if(a==2) num[1]=1;
    if(a==4) num[2]=1;
    if(a==3) {num[0]=1; num[1]=1;}
    if(a==5) {num[0]=1; num[2]=1;}
    if(a==6) {num[1]=1; num[2]=1;}
    if(a==7) {num[0]=1; num[1]=1; num[2]=1;}

    if(b==1) num[0]=1;
    if(b==2) num[1]=1;
    if(b==4) num[2]=1;
    if(b==3) {num[0]=1; num[1]=1;}
    if(b==5) {num[0]=1; num[2]=1;}
    if(b==6) {num[1]=1; num[2]=1;}
    if(b==7) {num[0]=1; num[1]=1; num[2]=1;}

    int sum=0;
    if(num[0]) sum+=1;
    if(num[1]) sum+=2;
    if(num[2]) sum+=4;
    cout<<sum<<endl;
    return 0;
}