#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x1,y1,z1,x2,y2,z2,x3,y3,z3,x4,y4,z4;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    cin>>x3>>y3>>z3>>x4>>y4>>z4;

    auto f=[&](int a,int b,int c,int d)->bool{
        return !(b<=c or d<=a);
    };

    //x軸, y軸, z軸について
    if(f(x1,x2,x3,x4) && f(y1,y2,y3,y4) && f(z1,z2,z3,z4)){cout<<"Yes"<<endl;}
    else cout<<"No"<<endl;
    return 0;
}