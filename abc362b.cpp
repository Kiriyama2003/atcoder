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
    
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    /*
    auto f=[&](int x,int y,int xx,int yy) ->ll{
        return (x-xx)*(x-xx)+(y-yy)*(y-yy);
    };

    if(f(x1,y1,x2,y2)+f(x1,y1,x3,y3)==f(x2,y2,x3,y3) || f(x2,y2,x3,y3)+f(x1,y1,x3,y3)==f(x1,y1,x2,y2) || f(x1,y1,x2,y2)+f(x2,y2,x3,y3)==f(x1,y1,x3,y3)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    */

   //内積 位置ベクトルを考える
   int abx=x2-x1,aby=y2-y1;
   int bcx=x3-x2,bcy=y3-y2;
   int cax=x1-x3,cay=y1-y3;
   if(abx*bcx+aby*bcy==0 || bcx*cax+bcy*cay==0 || cax*abx+cay*aby==0){
    cout<<"Yes"<<endl;
   }else cout<<"No"<<endl;

    return 0;
}