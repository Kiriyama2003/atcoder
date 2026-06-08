#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;

    for(int i=n;i<920;i++){
        int x= (i%10);  //一桁
        int y= ((i%100)-x)/10;  //二桁目
        int z= ((i%1000)-(i%100))/100;  //三桁目
        if(y*z == x) {
            cout<<i<<endl;
            return 0;
        }
    }
    //cout<<"aa"<<endl;
    return 0;
}