#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;  cin>>n;
    string s;   cin>>s;
    
    //一回目の|に出会ったら　sw==1
    //二回目の|に出会ったら　sw=2
    int sw=0;

    for(int i=0;i<n;i++){
        if(s[i]=='|') {
            ++sw;
            if(sw==2){
                cout<<"out"<<endl;
                return 0;
            }
            continue;
        }
        if(sw==1){
            if(s[i]=='*'){
                cout<<"in"<<endl;
                return 0;
            }
        }
    }

    return 0;
}