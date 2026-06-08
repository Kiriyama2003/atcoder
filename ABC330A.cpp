#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
    //入力フェーズ
    int n,l;        //n人　l点以上
    cin>>n>>l;
    vector <int>  A(n);     
    for(int i=0;i<n;i++){
        cin>>A[i];
    }


    int cnt=0;
    for(int i=0;i<n;i++){
        if(A[i]>=l) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}