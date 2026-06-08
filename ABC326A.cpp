#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,y;    cin>>x>>y;
    if(y-x>=1){   //上り
        if(y-x>=3) cout<<"No";
        else cout<<"Yes";
    }else{          //下り
        if(x-y>=4) cout<<"No";
        else cout<<"Yes";
    }
    return 0;
}