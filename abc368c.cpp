#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;  cin>>n;
    vector<ll> h(n);
    rep(i,n) cin>>h[i];


    ll cnt=0;
    ll now=0;//0,1,2 %3 ==
    rep(i,n){
        if(now == 1){
            if(h[i]==1)         {h[i]=0; cnt++; now=2;}
            else if(h[i]==2)    {h[i]=0; cnt+=2; now=0;}
            else if(h[i]==3)    {h[i]=0; cnt+=2; now=0;}
            else if(h[i]==4)    {h[i]=0; cnt+=2; now=0;}
            else                {h[i]-=4; cnt+=2;now =0;}
        }else if(now==2){
            if(h[i]==1)         {h[i]=0; cnt++; now=0;}
            else if(h[i]==2)    {h[i]=0; cnt++; now=0;}
            else if(h[i]==3)    {h[i]=0; cnt++; now=0;}
            else                {h[i]-=3; cnt++; now=0;}
        }
        
        

        cnt += (h[i]/5) *3;
        //if(h[i]%5 == 0 ) continue;
        if(h[i]%5 == 1) {now=1; cnt++;}
        else if(h[i]%5 == 2) {now=2; cnt+=2;}
        else if(h[i]%5 == 3) {now=0; cnt+=3;}
        else if(h[i]%5 == 4) {now=0; cnt+=3;}
    }
    cout<<cnt<<endl;
    return 0;
}