#include<bits/stdc++.h>
using namespace std;
int main(void){
    vector<int>a;
    int num;
    while(cin >> num){
        a.push_back(num);
        if(num==0) break;
    }
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i]<<endl;
    }


    return 0;
}