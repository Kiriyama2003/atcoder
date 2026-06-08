#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s,an_re; cin>>s;
    //s_re :=入力sを反転
    string s_re(s.rbegin(),s.rend());

    for(int i=0;i<s.size();i++){
        if(s_re[i]=='.') break;
        an_re.push_back(s_re[i]);
    }
    //an := an_reを反転
    string an(an_re.rbegin(),an_re.rend());
    for(int i=0;i<an.size();i++) cout<<an[i];

    return 0;
}