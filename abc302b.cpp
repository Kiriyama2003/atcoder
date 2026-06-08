#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n,m;    cin>>n>>m;
	vector<string> s(n);
	for(int i=0;i<n;i++)cin>>s[i];

    string str; int x,y;
    int dx[8]={-1,-1,-1, 0,0, 1,1,1};
    int dy[8]={-1, 0, 1,-1,1,-1,0,1};
    //////左下,左,左上,上,下,右上,右,右下

    //各行
	for(int i=0;i<n;i++){
        //各列
		for(int j=0;j<m;j++){
            //各点から, 8方向に進んでいく
			for(int k=0;k<8;k++){
				str="";
				for(int t=0;t<5;t++){
					x=i+t*dx[k];
                    y=j+t*dy[k];
                    //いずれでも範囲を超えたら,そもそも論外
					if((x<0)||(x>=n)||(y<0)||(y>=m))break;
					str+=s[x][y];
				}

              	if(str=="snuke"){
					for(int t=0;t<5;t++){
                        //行について
						x=i+t*dx[k]+1;
                        //列について
                        y=j+t*dy[k]+1;
						cout<<x<<" "<<y<<endl;
					}
					return 0;
				}
			}
		}
	}
    return 0;
}