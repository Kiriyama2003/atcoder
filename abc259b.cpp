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
    double a,b,d;  cin>>a>>b>>d;
    const double pi=3.1415926535897932384626433832795028841971;
    double r=hypot(a,b);
    double theta=atan2(b,a);

    theta+=d*pi/180.0;

    double x=cos(theta)*r;
    double y=sin(theta)*r;

    cout<<fixed<<setprecision(10)<<x<<" "<<y<<endl; 

    return 0;
}