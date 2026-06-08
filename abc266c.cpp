#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
struct V{
    int x;  int y;
    //x=0, y=0で初期化している
    V(int x=0,int y=0): x(x),y(y){}
};
int main(){
    //int ax,ay,bx,by,cx,cy,dx,dy;
    //cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy;
    //外積　b × c=bx cy - by cx

    vector<V> p(4);
    rep(i,4) cin>>p[i].x>>p[i].y;

    rep(i,4){
          V A=p[i];
          V B=p[(i+1)%4];
          V C=p[(i+2)%4];

          V AB={B.x-A.x,B.y-A.y};   //ABベクトル
          V AC={C.x-A.x,C.y-A.y};   //ACベクトル
          int signed_area=AB.x*AC.y - AB.y*AC.x;
          if(signed_area < 0){cout<<"No"<<endl; return 0;}
    }
    cout<<"Yes"<<endl;
    return 0;
}