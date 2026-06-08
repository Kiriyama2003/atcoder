#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long x;    cin>>x;
    if(x%10 ==0){
        cout<<x/10<<endl;
    }else if(x>=0){
        cout<<(x/10)+1<<endl;
    }else {
        cout<<x/10<<endl;
    }
    return 0;
}