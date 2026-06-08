#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> S(8);
    for(int i=0;i<8;i++) {
        cin>>S[i];
    }

    for(int i=1;i<8;i++) {
        if(S[i-1]>S[i]) {
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=0;i<8;i++){
        if(S[i]%25 !=0){
            cout<<"No"<<endl;
            return 0;
        }
        if(100>S[i] || S[i]>675){
        cout<<"No"<<endl;
        return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}