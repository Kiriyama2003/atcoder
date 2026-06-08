#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;  cin>>n;
    vector<string>name(n);
    vector<int>age(n);
    for(int i=0;i<n;i++) cin>>name[i]>>age[i];


    //処理
    pair<int,int>m={age[0],0};
    for(int i=1;i<n;i++) m=min(m,{age[i],i});
    int p=m.second;
    
    //出力のみ
    for(int i=0;i<n;i++) cout<<name[(p+i)%n]<<endl;
    return 0;
}