#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    int n; cin>>n;

    string r;       //入力値nを　2進数表記に　但し逆順
    while(n != 0){
        r +=(n%2==0 ? '0' : '1');
        n/=2;
    }
    int r_num = r.size();
    //cout<<r<<" "<<r_num<<" ";

    int an=0;

    for(int i=0; i<r_num;++i){
        if(r[i]=='0') an++;
        else break;
    }
    cout<<an<<endl;

    return 0;
}