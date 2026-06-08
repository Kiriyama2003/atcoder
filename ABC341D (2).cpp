#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,m,k;  cin>>n>>m>>k;

    long long cnt=0;
    long long num=n;

    while(true){
        if((num%n)==0 && (num%m) !=0) cnt++;
        else if((num%m)==0 && (num%n) !=0) cnt++;
        
        if(cnt==k) {
            cout<<num<<endl;
            return 0;
        }
        num++;
    }
    return 0;
}