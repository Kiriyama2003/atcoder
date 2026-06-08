#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;  cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    vector<vector<int>>b(n,vector<int>(n));
    vector<vector<int>>tmp(n,vector<int>(n));
    //0か1
    //A(i,j) i行目j列目
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>a[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>b[i][j];
    
    
    for(int cnt=0;cnt<4;cnt++){
        bool ok=1;

        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++) {
                if(a[l][m]==1 && b[l][m]==0) ok=0;
                //ok==0になれば　次も進む
            }
        }

        //4回回転するけど, 一回でもok==0にならなければ　"Yes"を出力
        if(ok==1){
            cout<<"Yes"<<endl;
            return 0;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //tmp[j][n-1-i]=a[i][j];
                tmp[i][j]=a[n-1-j][i];
            }
        }
        a=tmp;
    }
    cout<<"No"<<endl;
    return 0;
}