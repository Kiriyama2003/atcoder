#include<bits/stdc++.h>
using namespace std;
int main(void){
    int h,w,n; cin>>h>>w>>n;
    //0~3       上 右 下 左
    int dx[]={ -1, 0, 1, 0 };// 行について, 上から0 一番下はh-1
    int dy[]={  0, 1, 0,-1 };// 列について, 左から0 一番右はh-1
    vector<vector<char>> ans(h,vector<char>(w,'.'));


    int x=0,y=0,m=0;
    for(int i=0;i<n;i++){
        if(ans[x][y]=='.'){
            ans[x][y]='#';  m++;
        }else{
            ans[x][y]='.';  m+=3;
        }
        m%=4;   //3で割った時の余り
        //行について
        x+=dx[m];   if (x < 0) x += h;      if (x >= h) x -= h;
        //列について  
        y+=dy[m];   if (y < 0) y += w;      if (y >= w) y -= w;
    }


    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) cout<<ans[i][j];
        cout<<endl;
    }
    return 0;
}