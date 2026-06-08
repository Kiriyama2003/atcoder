#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll x,a,d,n; cin>>x>>a>>d>>n;

    /*
    if(d>=0){
        if(a+d*(n-1) <= x) cout<<abs(x-(a+d*(n-1)))<<endl;
        else if(x<= a) cout<<abs(a-x)<<endl;
        else{
            int num=x/d;
            if(num=0) cout<<min(   abs(x-a), abs(x- a+d))    <<endl;
            else cout<<min(   abs(x-a+(d*num)), abs(x- a+(d*(num-1)))    )<<endl;
        }    
    }else if(d<0){
        if(a <= x) cout<<abs(a-x)<<endl;
        else if(x <= a+d*(n-1)) cout<<abs(x-(a+d*(n-1)))<<endl;
        else{
            int num=x/d;
            cout<<min(abs(x- a+(d*num)), abs(x- a+(d*(num-1)) ))<<endl;
        }
    }*/

    ll last=a+ d*(n-1);
    if(d<0){ swap(a,last); d=-d;}
    if(x<=a) cout<<a-x<<endl;
    else if(last <= x) cout<<x-last<<endl;
    else{
        ll num=(x-a)/d; //x-a /d　重要
        ll closet1=a+ d*num;
        ll closet2=closet1+d;
        cout<<min(x-closet1,closet2-x)<<endl;
    }

    return 0;
}