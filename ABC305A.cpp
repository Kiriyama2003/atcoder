#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;  cin>>n;
    if(n%5 ==0){
        cout<<n<<endl;
    }
    else if(n%5 ==1 || n%5==2){
        int a=n/5;
        cout<<a*5<<endl;
    }else{
        int a=n/5;
        cout<<(a+1)*5<<endl;
    }
    return 0;
}