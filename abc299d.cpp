#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    int l=1,r=n;
    while(l+1!=r){
        int m=(l+r)/2;
        cout<<"? "<<m<<endl;

        int p;  cin>>p;

        if(p==0) l=m;       //0を右に近づける
        else if(p==1) r=m;  //1を左に近づける==
    }
    cout<<"! "<<l<<endl;
    return 0;
}