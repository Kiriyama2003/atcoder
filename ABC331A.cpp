#include<bits/stdc++.h>
using namespace std;
int main(void){
    int M,D;      cin>>M>>D;
    int y,m,d;    cin>>y>>m>>d;

    if(d==D) {      //日が最後なら
        d=1;        //日を1日に
        if(m==M){   //月が最後なら
            y++; m=1;
        }else m++;
    }else d++;



    cout<<y<<" "<<m<<" "<<d<<endl;
    return 0;
}