#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n;  string s;   cin>>n>>s;
    int cntT=0;
    int cntA=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T') ++cntT;
        else ++cntA;
    }

    if(cntT>cntA)cout<<"T";
    else if(cntA>cntT) cout<<"A";

    //以下のelseを　置き換える
    else if(s[n-1]=='A') cout<<"T";
    else cout<<"A";
    /*
    else {
        int tmp=cntA;
        cntT=0;cntA=0;
        for(int i=0;i<n;i++){
            if(s[i]=='T') ++cntT;
            else ++cntA;

            if(tmp==cntT) {
                cout<<"T";
                break;
            }else if(tmp==cntA){
                cout<<"A";
                break;
            }
        }
    }*/
    return 0;
}