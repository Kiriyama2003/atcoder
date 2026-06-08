#include<bits/stdc++.h>
using namespace std;
int main(void){
    int gyosu,retusu;           cin>>gyosu>>retusu;
    vector<string>a(gyosu);     vector<string>b(gyosu);
    for(int i=0;i<gyosu;++i) cin>>a[i];
    //for(auto& x:a) cin>>x;
    for(int i=0;i<gyosu;++i) cin>>b[i];

    //縦操作は0回以上 (gyosu-1)回以下　　縦操作をgyosu回すると, 縦操作0回と同じだね
    for(int s=0;s<gyosu;s++){
        //横操作：0回(現状維持)　から　(retusu-1)回以下
        for(int t=0;t<retusu;t++){
            int ok=1; //操作後のグリッドa　と　グリッドb　は等しいという前提
            for(int i=0;i<gyosu;i++){
                for(int j=0;j<retusu;j++){
                    if(a[(i+s)%gyosu][(j+t)%retusu] != b[i][j]) ok=0;
                }
            }
            if(ok==1){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}