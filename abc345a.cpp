#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;   cin>>s;
    int n=s.size();

    /*
    if(s[0]!='<' || s[n-1]!='>'){
        cout<<"No";
        return 0;
    }
    for(int i=1;i<n-1;i++){
        if(s[i]!='='){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";*/



    //解法2
    cout<<(s=='<'+string(n-2,'=')+'>' ?"Yes":"No")<<endl;

    return 0;
}